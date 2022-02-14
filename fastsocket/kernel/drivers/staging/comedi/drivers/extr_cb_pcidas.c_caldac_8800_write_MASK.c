
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* caldac_value; scalar_t__ control_status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (struct comedi_device*,int,unsigned int,int const) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_3, unsigned int VAR_4,
        uint8_t VAR_5)
{
 static const int VAR_6 = 8;
 static const int VAR_7 = 11;
 unsigned int VAR_8 = ((VAR_4 & 0x7) << 8) | VAR_5;
 static const int VAR_9 = 1;

 if (VAR_4 >= VAR_6) {
  FUNC_1(VAR_3, "illegal caldac channel");
  return -1;
 }

 if (VAR_5 == VAR_2->caldac_value[VAR_4])
  return 1;

 VAR_2->caldac_value[VAR_4] = VAR_5;

 FUNC_4(VAR_3, FUNC_0(VAR_3), VAR_8,
        VAR_7);

 FUNC_3(VAR_9);
 FUNC_2(FUNC_0(VAR_3) | VAR_1,
      VAR_2->control_status + VAR_0);
 FUNC_3(VAR_9);
 FUNC_2(FUNC_0(VAR_3), VAR_2->control_status + VAR_0);

 return 1;
}
