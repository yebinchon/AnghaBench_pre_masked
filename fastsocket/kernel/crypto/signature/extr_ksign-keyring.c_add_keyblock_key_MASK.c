
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksign_public_key {scalar_t__ expiredate; scalar_t__ timestamp; int link; int count; int * keyid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ksign_public_key *VAR_2, void *VAR_3)
{
 FUNC_4("- Added public key %X%X\n", VAR_2->keyid[0], VAR_2->keyid[1]);

 if (VAR_2->expiredate && VAR_2->expiredate < FUNC_2())
  FUNC_4("  - public key has expired\n");

 if (VAR_2->timestamp > FUNC_2())
  FUNC_4("  - key was been created %lu seconds in future\n",
         VAR_2->timestamp - FUNC_2());

 FUNC_0(&VAR_2->count);

 FUNC_1(&VAR_1);
 FUNC_3(&VAR_2->link, &VAR_0);
 FUNC_5(&VAR_1);

 return 0;
}
