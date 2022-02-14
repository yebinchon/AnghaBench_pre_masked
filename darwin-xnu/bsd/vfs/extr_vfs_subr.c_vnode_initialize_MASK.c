
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int uint32_t ;
struct TYPE_8__ {int v_iocount; scalar_t__ v_usecount; int v_lflag; int * v_data; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_1__*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,void*,TYPE_1__**,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(uint32_t VAR_2, uint32_t VAR_3, void *VAR_4, vnode_t *VAR_5)
{
 if (*VAR_5 == VAR_0) {
  FUNC_1("NULL vnode passed to vnode_initialize");
 }
 return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, 1));
}
