
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
 unsigned int VAR_2 ;
 unsigned int const FUNC_3 (unsigned int) ;




 unsigned int const FUNC_4 (unsigned int) ;

 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_5 (struct ni_gpct*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ni_gpct *VAR_5,
      unsigned int VAR_6)
{
 const unsigned VAR_7 = FUNC_0(VAR_6);

 const unsigned VAR_8 = 0x1f;
 unsigned VAR_9;
 unsigned VAR_10;

 switch (VAR_7) {
 case 129:
  VAR_9 = VAR_2;
  break;
 case 130:
 case 131:
 case 128:
 case 132:
  VAR_9 = VAR_7 & VAR_8;
  break;
 default:
  for (VAR_10 = 0; VAR_10 <= VAR_4; ++VAR_10) {
   if (VAR_7 == FUNC_4(VAR_10)) {
    VAR_9 =
        VAR_7 & VAR_8;
    break;
   }
  }
  if (VAR_10 <= VAR_4)
   break;
  for (VAR_10 = 0; VAR_10 <= VAR_3; ++VAR_10) {
   if (VAR_7 == FUNC_3(VAR_10)) {
    VAR_9 =
        VAR_7 & VAR_8;
    break;
   }
  }
  if (VAR_10 <= VAR_3)
   break;
  return -VAR_0;
  break;
 }
 FUNC_5(VAR_5,
   FUNC_2(VAR_5->counter_index),
   VAR_1,
   FUNC_1(VAR_9));
 return 0;
}
