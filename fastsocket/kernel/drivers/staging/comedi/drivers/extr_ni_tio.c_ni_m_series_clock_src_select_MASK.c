
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int* regs; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;



 unsigned int const FUNC_5 (unsigned int) ;

 unsigned int const FUNC_6 (unsigned int) ;



 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int FUNC_7 (struct ni_gpct const*) ;
 unsigned int FUNC_8 (struct ni_gpct const*,int ) ;

__attribute__((used)) static unsigned FUNC_9(const struct ni_gpct *VAR_14)
{
 struct ni_gpct_device *VAR_15 = VAR_14->counter_dev;
 const unsigned VAR_16 =
     FUNC_2(VAR_14->counter_index);
 unsigned VAR_17 = 0;
 unsigned VAR_18;
 const unsigned VAR_19 = (FUNC_8(VAR_14,
           FUNC_1
           (VAR_14->counter_index))
           & VAR_0) >>
     VAR_1;

 switch (VAR_19) {
 case 130:
  VAR_17 = VAR_9;
  break;
 case 129:
  VAR_17 = VAR_10;
  break;
 case 128:
  if (VAR_15->regs[VAR_16] &
      VAR_2)
   VAR_17 =
       VAR_3;
  else
   VAR_17 = VAR_11;
  break;
 case 134:
  VAR_17 = VAR_4;
  break;
 case 133:
  if (VAR_15->regs[VAR_16] &
      VAR_2)
   VAR_17 = VAR_8;
  else
   VAR_17 = VAR_5;
  break;
 case 131:
  VAR_17 = VAR_7;
  break;
 case 132:
  VAR_17 = VAR_6;
  break;
 default:
  for (VAR_18 = 0; VAR_18 <= VAR_13; ++VAR_18) {
   if (VAR_19 == FUNC_6(VAR_18)) {
    VAR_17 = FUNC_4(VAR_18);
    break;
   }
  }
  if (VAR_18 <= VAR_13)
   break;
  for (VAR_18 = 0; VAR_18 <= VAR_12; ++VAR_18) {
   if (VAR_19 == FUNC_5(VAR_18)) {
    VAR_17 = FUNC_3(VAR_18);
    break;
   }
  }
  if (VAR_18 <= VAR_12)
   break;
  FUNC_0();
  break;
 }
 VAR_17 |= FUNC_7(VAR_14);
 return VAR_17;
}
