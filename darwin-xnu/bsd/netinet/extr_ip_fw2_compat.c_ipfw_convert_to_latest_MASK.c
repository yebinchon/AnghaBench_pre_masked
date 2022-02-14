
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {int dummy; } ;
struct ip_fw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct sockopt*,struct ip_fw*,int *) ;
 int FUNC_1 (struct sockopt*,struct ip_fw*,int *) ;

int
FUNC_2(struct sockopt *VAR_2, struct ip_fw *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;




 switch (VAR_4) {
  case 129:

   VAR_6 = VAR_1;
   break;

  case 128:

   if ( VAR_5 )
    VAR_6 = FUNC_1(VAR_2, VAR_3, ((void*)0));
   else
    VAR_6 = FUNC_0(VAR_2, VAR_3, ((void*)0));
   break;

  case 130:


   break;

  default:

   VAR_6 = VAR_0;
   break;
 }

 return VAR_6;
}
