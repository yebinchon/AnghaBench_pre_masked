
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ control_status; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct comedi_device*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (struct comedi_device*,unsigned int,unsigned int,int const) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3, unsigned int VAR_4,
         uint8_t VAR_5)
{
 static const int VAR_6 = 10;
 unsigned int VAR_7 = ((VAR_4 & 0x3) << 8) | (VAR_5 & 0xff);
 unsigned int VAR_8;
 static const int VAR_9 = 1;

 VAR_8 = FUNC_0(VAR_3) | VAR_1;
 FUNC_2(VAR_9);
 FUNC_1(VAR_8, VAR_2->control_status + VAR_0);

 FUNC_3(VAR_3, VAR_8, VAR_7,
        VAR_6);

 FUNC_2(VAR_9);
 FUNC_1(FUNC_0(VAR_3), VAR_2->control_status + VAR_0);

 return 0;
}
