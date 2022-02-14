
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aem_data {int lock; scalar_t__ valid; scalar_t__ last_updated; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct aem_data*) ;

__attribute__((used)) static void FUNC_4(struct aem_data *VAR_2)
{
 FUNC_0(&VAR_2->lock);
 if (FUNC_2(VAR_1, VAR_2->last_updated + VAR_0) &&
     VAR_2->valid)
  goto out;

 FUNC_3(VAR_2);
out:
 FUNC_1(&VAR_2->lock);
}
