
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(void)
{
 extern void FUNC_4(int);


 if (VAR_5 == VAR_0)
  return;


 if (!FUNC_0(VAR_2, VAR_1, &VAR_5)) {

  while (!FUNC_1())
   FUNC_4(10);
  return;
 }
 VAR_4 = FUNC_2("gss_krb5_mech", VAR_3);
 VAR_5 = VAR_0;
}
