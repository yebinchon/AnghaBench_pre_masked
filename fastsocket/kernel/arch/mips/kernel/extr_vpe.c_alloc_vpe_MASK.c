
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpe {int minor; int notify; int list; int tc; } ;
struct TYPE_2__ {int vpe_list_lock; int vpe_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct vpe* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static struct vpe *FUNC_5(int VAR_2)
{
 struct vpe *VAR_3;

 if ((VAR_3 = FUNC_1(sizeof(struct vpe), VAR_0)) == ((void*)0))
  return ((void*)0);

 FUNC_0(&VAR_3->tc);
 FUNC_3(&VAR_1.vpe_list_lock);
 FUNC_2(&VAR_3->list, &VAR_1.vpe_list);
 FUNC_4(&VAR_1.vpe_list_lock);

 FUNC_0(&VAR_3->notify);
 VAR_3->minor = VAR_2;

 return VAR_3;
}
