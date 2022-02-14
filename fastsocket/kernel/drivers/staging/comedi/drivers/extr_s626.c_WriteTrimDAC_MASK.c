
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {size_t* TrimSetpoint; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__* VAR_9 ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_10, uint8_t VAR_11,
    uint8_t VAR_12)
{
 uint32_t VAR_13;


 VAR_8->TrimSetpoint[VAR_11] = (uint8_t) VAR_12;


 VAR_13 = (uint32_t) VAR_9[VAR_11];






 FUNC_0(2, VAR_7 | VAR_4 | VAR_2);

 FUNC_0(3, VAR_7 | VAR_3 | VAR_2);

 FUNC_0(4, VAR_7 | VAR_6 | VAR_1);

 FUNC_0(5, VAR_7 | VAR_5 | VAR_1 | VAR_0);
 FUNC_1(VAR_10, ((uint32_t) VAR_13 << 8)
  | (uint32_t) VAR_12);
}
