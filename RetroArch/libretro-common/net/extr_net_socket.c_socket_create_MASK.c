
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum socket_type { ____Placeholder_socket_type } socket_type ;
typedef enum socket_protocol { ____Placeholder_socket_protocol } socket_protocol ;
typedef enum socket_domain { ____Placeholder_socket_domain } socket_domain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int,int) ;
 int FUNC_2 (int,int,int) ;

int FUNC_3(
      const char *VAR_8,
      enum socket_domain VAR_9,
      enum socket_type VAR_10,
      enum socket_protocol VAR_11)
{
   int VAR_12 = 0;
   int VAR_13 = 0;
   int VAR_14 = FUNC_0(VAR_9);
   switch (VAR_10)
   {
      case 130:
         VAR_12 = VAR_6;
         break;
      case 128:
         VAR_12 = VAR_7;
         break;
      case 129:

         break;
   }

   switch (VAR_11)
   {
      case 133:
         VAR_13 = 0;
         break;
      case 132:
         VAR_13 = VAR_0;
         break;
      case 131:
         VAR_13 = VAR_1;
         break;
   }

   return FUNC_2(VAR_14, VAR_12, VAR_13);

}
