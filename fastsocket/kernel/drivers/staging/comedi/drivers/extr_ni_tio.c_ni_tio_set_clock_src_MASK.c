
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct ni_gpct_device {int variant; } ;
struct ni_gpct {unsigned int clock_period_ps; int counter_index; struct ni_gpct_device* counter_dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 unsigned int VAR_3 ;

 unsigned int VAR_4 ;


 unsigned int FUNC_5 (unsigned int) ;



 unsigned int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (struct ni_gpct_device*) ;
 int FUNC_8 (struct ni_gpct*,int ,unsigned int,unsigned int) ;
 int FUNC_9 (struct ni_gpct*,unsigned int) ;
 int FUNC_10 (struct ni_gpct*,int ) ;

__attribute__((used)) static int FUNC_11(struct ni_gpct *VAR_5,
    unsigned int VAR_6,
    unsigned int VAR_7)
{
 struct ni_gpct_device *VAR_8 = VAR_5->counter_dev;
 unsigned VAR_9 = 0;
 static const uint64_t VAR_10 = 1000;


 switch (VAR_8->variant) {
 case 130:
  VAR_9 |= FUNC_5(VAR_6);
  break;
 case 129:
 case 128:
  VAR_9 |=
      FUNC_6(VAR_6);
  break;
 default:
  FUNC_0();
  break;
 }
 if (VAR_6 & VAR_3)
  VAR_9 |= VAR_1;
 FUNC_8(VAR_5,
   FUNC_4(VAR_5->counter_index),
   VAR_2 | VAR_1,
   VAR_9);
 FUNC_9(VAR_5, VAR_6);
 if (FUNC_7(VAR_8)) {
  const unsigned VAR_11 =
      VAR_6 & VAR_4;
  unsigned VAR_12 = 0;

  switch (VAR_11) {
  case 133:
   break;
  case 132:
   VAR_12 |=
       FUNC_1(VAR_8->variant);
   break;
  case 131:
   VAR_12 |=
       FUNC_2(VAR_8->variant);
   break;
  default:
   return -VAR_0;
   break;
  }
  FUNC_8(VAR_5,
    FUNC_3(VAR_5->
          counter_index),
    FUNC_1(VAR_8->variant) |
    FUNC_2(VAR_8->variant),
    VAR_12);
 }
 VAR_5->clock_period_ps = VAR_10 * VAR_7;
 FUNC_10(VAR_5, 0);
 return 0;
}
