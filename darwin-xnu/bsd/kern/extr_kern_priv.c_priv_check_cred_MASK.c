
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

int
FUNC_3(kauth_cred_t VAR_2, int VAR_3, int VAR_4)
{

#pragma unused(priv)

 int VAR_5;
 if (!(VAR_4 & VAR_1)) {






  if (FUNC_0(VAR_2) == 0) {
   VAR_5 = 0;
   goto out;
  }
 }
 VAR_5 = VAR_0;
out:
 return (VAR_5);
}
