
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; int algs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(void)
{
 int VAR_4 = -VAR_0;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  goto out;

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
 FUNC_0(&VAR_2->algs);
 FUNC_5(&VAR_2->lock);

 VAR_4 = FUNC_1(&VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2);
  VAR_2 = ((void*)0);
 }
out:
 return VAR_4;
}
