
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int ltree_lock; int global_sqnum; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned long long FUNC_2(struct ubi_device *VAR_0)
{
 unsigned long long VAR_1;

 FUNC_0(&VAR_0->ltree_lock);
 VAR_1 = VAR_0->global_sqnum++;
 FUNC_1(&VAR_0->ltree_lock);

 return VAR_1;
}
