
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (char*,int,int ) ;
 int FUNC_3 (struct cred const*) ;
 int FUNC_4 (struct cred const**) ;
 int FUNC_5 (char*,...) ;
 int * VAR_2 ;

void
FUNC_6(char *VAR_3)
{
 const struct cred *VAR_4;
 int VAR_5;

 FUNC_5("NFSD: Using %s as the NFSv4 state recovery directory\n",
   VAR_3);

 FUNC_0(VAR_2);

 VAR_5 = FUNC_4(&VAR_4);
 if (VAR_5 < 0) {
  FUNC_5("NFSD: Unable to change credentials to find recovery"
         " directory: error %d\n",
         VAR_5);
  return;
 }

 VAR_2 = FUNC_2(VAR_3, VAR_1 | VAR_0, 0);
 if (FUNC_1(VAR_2)) {
  FUNC_5("NFSD: unable to find recovery directory %s\n",
    VAR_3);
  VAR_2 = ((void*)0);
 }

 FUNC_3(VAR_4);
}
