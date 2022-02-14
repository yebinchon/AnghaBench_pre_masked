
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct fsync_args {int fd; } ;
struct fileproc {int f_flags; } ;
typedef int proc_t ;
struct TYPE_9__ {int v_flag; scalar_t__ v_parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct fileproc**,TYPE_1__**) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_9(proc_t VAR_6, struct fsync_args *VAR_7, int VAR_8)
{
 vnode_t VAR_9;
 struct fileproc *VAR_10;
 vfs_context_t VAR_11 = FUNC_4();
 int VAR_12;

 FUNC_0(VAR_4, VAR_7->fd);

 if ( (VAR_12 = FUNC_3(VAR_6, VAR_7->fd, &VAR_10, &VAR_9)) )
  return (VAR_12);
 if ( (VAR_12 = FUNC_6(VAR_9)) ) {
  FUNC_2(VAR_7->fd);
  return(VAR_12);
 }

 FUNC_0(VAR_5, VAR_9, VAR_0);

 VAR_12 = FUNC_1(VAR_9, VAR_8, VAR_11);
 (void)FUNC_8(VAR_9);
 FUNC_2(VAR_7->fd);
 return (VAR_12);
}
