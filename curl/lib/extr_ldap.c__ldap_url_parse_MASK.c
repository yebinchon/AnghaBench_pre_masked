
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;
typedef int LDAPURLDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct connectdata const*,int *) ;
 int * FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(const struct connectdata *VAR_2,
                           LDAPURLDesc **VAR_3)
{
  LDAPURLDesc *VAR_4 = FUNC_2(1, sizeof(*VAR_4));
  int VAR_5;

  *VAR_3 = ((void*)0);
  if(!VAR_4)
     return VAR_0;

  VAR_5 = FUNC_1(VAR_2, VAR_4);
  if(VAR_5 != VAR_1) {
    FUNC_0(VAR_4);
    VAR_4 = ((void*)0);
  }
  *VAR_3 = VAR_4;
  return (VAR_5);
}
