
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct crypto_alg {int cra_list; int cra_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct crypto_alg*) ;
 int FUNC_1 (struct crypto_alg*,struct list_head*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct crypto_alg *VAR_3, struct list_head *VAR_4)
{
 if (FUNC_4(FUNC_3(&VAR_3->cra_list)))
  return -VAR_2;

 VAR_3->cra_flags |= VAR_0;

 FUNC_0(VAR_1, VAR_3);
 FUNC_2(&VAR_3->cra_list);
 FUNC_1(VAR_3, VAR_4, ((void*)0));

 return 0;
}
