
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwch_dev {int lock; int qpidr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iwch_dev *VAR_1, int VAR_2)
{
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_1->qpidr, VAR_0,
       (void *)(unsigned long)VAR_2);
 FUNC_2(&VAR_1->lock);
}
