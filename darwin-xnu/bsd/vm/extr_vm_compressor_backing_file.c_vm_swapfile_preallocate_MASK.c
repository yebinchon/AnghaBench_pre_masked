
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int * vfs_context_t ;
typedef scalar_t__ uint64_t ;
struct vnode_attr {int dummy; } ;
typedef int off_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {int v_flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vnode_attr*) ;
 int FUNC_2 (struct vnode_attr*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int ,int *) ;
 int FUNC_4 (TYPE_1__*,struct vnode_attr*,int *) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,...) ;
 int VAR_5 ;
 int * FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int *,int *) ;
 int FUNC_11 (TYPE_1__*) ;

int
FUNC_12(vnode_t VAR_6, uint64_t *VAR_7, boolean_t *VAR_8)
{
 int VAR_9 = 0;
 uint64_t VAR_10 = 0;
 vfs_context_t VAR_11 = ((void*)0);




 VAR_11 = FUNC_7();

 VAR_9 = FUNC_9(VAR_6, *VAR_7, VAR_2, VAR_11);

 if (VAR_9) {
  FUNC_6("vnode_setsize for swap files failed: %d\n", VAR_9);
  goto done;
 }

 VAR_9 = FUNC_10(VAR_6, (off_t*) &VAR_10, VAR_11);

 if (VAR_9) {
  FUNC_6("vnode_size (new file) for swap file failed: %d\n", VAR_9);
  goto done;
 }
 FUNC_5(VAR_10 == *VAR_7);

 if (VAR_8 != ((void*)0) && *VAR_8 != VAR_0) {
  VAR_9 = FUNC_3(VAR_6, VAR_1, ((void*)0), 0, VAR_11);

  if (VAR_9) {
   FUNC_6("pin for swap files failed: %d,  file_size = %lld\n", VAR_9, VAR_10);

   *VAR_8 = VAR_0;
   VAR_9 = 0;
  }
 }

 FUNC_8(VAR_6);
 FUNC_0(VAR_6->v_flag, VAR_4);
 FUNC_11(VAR_6);
done:
 return VAR_9;
}
