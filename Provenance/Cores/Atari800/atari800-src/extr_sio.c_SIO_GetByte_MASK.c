
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int* VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;

 int VAR_8 ;

 int VAR_9 ;

int FUNC_3(void)
{
 int VAR_10 = 0;

 switch (VAR_9) {
 case 128:
  VAR_10 = FUNC_1();
  break;
 case 130:
  VAR_9 = 129;
  VAR_5 = VAR_8 << 3;

 case 129:
  if (VAR_1 < VAR_2) {
   VAR_10 = VAR_0[VAR_1++];
   if (VAR_1 >= VAR_2) {
    VAR_9 = VAR_7;
   }
   else {

    VAR_5 = (VAR_1 == 1) ? VAR_8
     : ((VAR_8 * VAR_3[VAR_4] - 1) / 0x28 + 1);
   }
  }
  else {
   FUNC_2("Invalid read frame!");
   VAR_9 = VAR_7;
  }
  break;
 case 131:
  if (VAR_1 < VAR_2) {
   VAR_10 = VAR_0[VAR_1++];
   if (VAR_1 >= VAR_2) {
    VAR_9 = VAR_7;
   }
   else {
    if (VAR_1 == 0)
     VAR_5 = VAR_8 + VAR_6;
    else
     VAR_5 = VAR_8;
   }
  }
  else {
   FUNC_2("Invalid read frame!");
   VAR_9 = VAR_7;
  }
  break;
 case 132:
  VAR_10 = FUNC_0();
  break;
 default:
  break;
 }
 return VAR_10;
}
