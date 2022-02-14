
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;



 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char const*,int) ;
 int FUNC_9 (char const*,char*) ;
 int VAR_4 ;
 int FUNC_10 (int) ;

int FUNC_11(const char *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = FUNC_0(VAR_5);
 switch (VAR_9) {
 case 146:
 case 144:
 case 132:
 case 145:
 case 131:
 case 139:
 case 137:
  if (!FUNC_8(VAR_7, VAR_5, VAR_8))
   return VAR_0;
  if (VAR_6)
   FUNC_1();
  break;
 case 133:
 case 143:
 case 138:
  if (!FUNC_2(VAR_5))
   return VAR_0;
  break;
 case 141:
 case 136:
  {
   int VAR_10;
   if (VAR_6)
    VAR_10 = FUNC_4(VAR_5);
   else
    VAR_10 = FUNC_3(VAR_5);
   switch (VAR_10) {
   case 128:
   case 129:
    return VAR_0;
   case 130:
   case 0:

    break;
   default:






    FUNC_5(&VAR_1, FUNC_10(VAR_10));



    break;

   }
  }
  break;
 case 140:
 case 142:
  if (!FUNC_6(VAR_5))
   return VAR_0;
  if (VAR_6) {
   VAR_2 = VAR_4;
   FUNC_1();
  }
  break;
 case 135:
 case 134:




  if (!FUNC_9(VAR_5, "rb"))
   return VAR_0;

  VAR_3 = 0;
  break;

 default:
  break;
 }
 return VAR_9;
}
