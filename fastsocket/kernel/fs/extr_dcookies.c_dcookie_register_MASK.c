
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcookie_user {int next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct dcookie_user*) ;
 struct dcookie_user* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct dcookie_user * FUNC_7(void)
{
 struct dcookie_user * VAR_3;

 FUNC_5(&VAR_1);

 VAR_3 = FUNC_3(sizeof(struct dcookie_user), VAR_0);
 if (!VAR_3)
  goto out;

 if (!FUNC_1() && FUNC_0())
  goto out_free;

 FUNC_4(&VAR_3->next, &VAR_2);

out:
 FUNC_6(&VAR_1);
 return VAR_3;
out_free:
 FUNC_2(VAR_3);
 VAR_3 = ((void*)0);
 goto out;
}
