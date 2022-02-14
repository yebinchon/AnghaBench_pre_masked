
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int uio_t ;
struct TYPE_8__ {int v_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,size_t*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,size_t*,int,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int ) ;

int
FUNC_5(vnode_t VAR_6, uio_t VAR_7, size_t *VAR_8, int VAR_9, vfs_context_t VAR_10)
{
 int VAR_11;

 if (!FUNC_1(VAR_6)) {
  return (VAR_1);
 }







 if (!(VAR_9 & VAR_5)) {






  VAR_11 = FUNC_4(VAR_6, ((void*)0), VAR_2, VAR_10);
  if (VAR_11)
   goto out;
 }

 VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_11 == VAR_0 && !(VAR_9 & VAR_4)) {





  VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 }
out:
 return (VAR_11);
}
