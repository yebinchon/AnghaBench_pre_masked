
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct vnop_read_args {int a_ioflag; int a_uio; TYPE_1__* a_vp; } ;
typedef TYPE_2__* mockfs_fsnode_t ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {scalar_t__ v_type; scalar_t__ v_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

int FUNC_1(struct vnop_read_args * VAR_2)
{
 int VAR_3;
 vnode_t VAR_4;
 mockfs_fsnode_t VAR_5;

 VAR_4 = VAR_2->a_vp;
 VAR_5 = (mockfs_fsnode_t) VAR_4->v_data;





 if (VAR_4->v_type == VAR_1) {
  VAR_3 = FUNC_0(VAR_4, VAR_2->a_uio, VAR_5->size, VAR_2->a_ioflag);
 }
 else {



  VAR_3 = VAR_0;
 }

 return VAR_3;
}
