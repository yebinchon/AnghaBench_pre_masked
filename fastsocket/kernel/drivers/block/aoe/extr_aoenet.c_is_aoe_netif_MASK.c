
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* name; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ) ;

int
FUNC_4(struct net_device *VAR_2)
{
 register char *VAR_3, *VAR_4;
 register int VAR_5;

 if (VAR_1[0] == '\0')
  return 1;

 VAR_3 = VAR_1 + FUNC_3(VAR_1, VAR_0);
 for (; *VAR_3; VAR_3 = VAR_4 + FUNC_3(VAR_4, VAR_0)) {
  VAR_4 = VAR_3 + FUNC_0(VAR_3, VAR_0);
  if (VAR_4 != VAR_3)
   VAR_5 = VAR_4 - VAR_3;
  else
   VAR_5 = FUNC_1(VAR_3);

  if (FUNC_1(VAR_2->name) == VAR_5 && !FUNC_2(VAR_2->name, VAR_3, VAR_5))
   return 1;
  if (VAR_4 == VAR_3)
   break;
 }

 return 0;
}
