
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;






 unsigned int const FUNC_3 (unsigned int) ;

 unsigned int const FUNC_4 (unsigned int) ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_5 (struct ni_gpct*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ni_gpct *VAR_4,
          unsigned int VAR_5)
{
 const unsigned VAR_6 = FUNC_0(VAR_5);

 const unsigned VAR_7 = 0x1f;
 unsigned VAR_8;
 unsigned VAR_9;

 switch (VAR_6) {
 case 128:
 case 134:
 case 129:
 case 131:
 case 135:
 case 130:
 case 133:
 case 132:
  VAR_8 = VAR_6 & VAR_7;
  break;
 default:
  for (VAR_9 = 0; VAR_9 <= VAR_3; ++VAR_9) {
   if (VAR_6 == FUNC_4(VAR_9)) {
    VAR_8 =
        VAR_6 & VAR_7;
    break;
   }
  }
  if (VAR_9 <= VAR_3)
   break;
  for (VAR_9 = 0; VAR_9 <= VAR_2; ++VAR_9) {
   if (VAR_6 == FUNC_3(VAR_9)) {
    VAR_8 =
        VAR_6 & VAR_7;
    break;
   }
  }
  if (VAR_9 <= VAR_2)
   break;
  return -VAR_0;
  break;
 }
 FUNC_5(VAR_4,
   FUNC_2(VAR_4->counter_index),
   VAR_1,
   FUNC_1(VAR_8));
 return 0;
}
