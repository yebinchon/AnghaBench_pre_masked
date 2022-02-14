
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ene_device {int rdev; scalar_t__ carrier_detect_enabled; } ;
struct TYPE_4__ {int carrier_report; int carrier; int duty_cycle; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct ene_device*,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int ,TYPE_1__*) ;

void FUNC_4(struct ene_device *VAR_4)
{
 FUNC_0(VAR_3);

 int VAR_5, VAR_6;
 int VAR_7 = FUNC_2(VAR_4, VAR_1);
 int VAR_8 = FUNC_2(VAR_4, VAR_0);

 if (!(VAR_7 & VAR_2))
  return;

 VAR_7 &= ~VAR_2;

 if (!VAR_7)
  return;

 FUNC_1("RX: hardware carrier period = %02x", VAR_7);
 FUNC_1("RX: hardware carrier pulse period = %02x", VAR_8);

 VAR_5 = 2000000 / VAR_7;
 VAR_6 = (VAR_8 * 100) / VAR_7;
 FUNC_1("RX: sensed carrier = %d Hz, duty cycle %d%%",
      VAR_5, VAR_6);
 if (VAR_4->carrier_detect_enabled) {
  VAR_3.carrier_report = 1;
  VAR_3.carrier = VAR_5;
  VAR_3.duty_cycle = VAR_6;
  FUNC_3(VAR_4->rdev, &VAR_3);
 }
}
