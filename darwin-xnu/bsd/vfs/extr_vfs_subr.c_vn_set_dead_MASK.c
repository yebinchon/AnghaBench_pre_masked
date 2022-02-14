
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_3__ {int v_lflag; int v_type; int * v_data; int v_tag; int v_op; int * v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_0(vnode_t VAR_4)
{
 VAR_4->v_mount = ((void*)0);
 VAR_4->v_op = VAR_3;
 VAR_4->v_tag = VAR_2;
 VAR_4->v_data = ((void*)0);
 VAR_4->v_type = VAR_0;
 VAR_4->v_lflag |= VAR_1;
}
