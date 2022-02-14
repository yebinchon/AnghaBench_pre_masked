
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_specsize; } ;
typedef int dev_t ;
struct TYPE_2__ {int (* d_psize ) (int ) ;} ;


 void* VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct vnode *VAR_3, dev_t VAR_4)
{
    int (*VAR_5)(dev_t);
    int VAR_6;

    if ((FUNC_0(VAR_4) < VAR_2) && (VAR_5 = VAR_1[FUNC_0(VAR_4)].d_psize)) {
        VAR_6 = (*VAR_5)(VAR_4);
 if (VAR_6 <= 0)
     VAR_3->v_specsize = VAR_0;
 else
     VAR_3->v_specsize = VAR_6;
    }
    else
     VAR_3->v_specsize = VAR_0;
}
