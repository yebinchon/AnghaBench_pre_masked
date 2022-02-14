
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_gang {int aff_list_head; int list; int aff_mutex; int mutex; int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct spu_gang* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

struct spu_gang *FUNC_4(void)
{
 struct spu_gang *VAR_1;

 VAR_1 = FUNC_2(sizeof *VAR_1, VAR_0);
 if (!VAR_1)
  goto out;

 FUNC_1(&VAR_1->kref);
 FUNC_3(&VAR_1->mutex);
 FUNC_3(&VAR_1->aff_mutex);
 FUNC_0(&VAR_1->list);
 FUNC_0(&VAR_1->aff_list_head);

out:
 return VAR_1;
}
