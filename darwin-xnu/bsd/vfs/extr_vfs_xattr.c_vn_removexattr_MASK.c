
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct TYPE_11__ {int v_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,char const*,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,int,int ) ;
 int FUNC_3 (int ,TYPE_1__*,char const*) ;
 int FUNC_4 (int ,TYPE_1__*,char const*) ;
 int FUNC_5 (int ,TYPE_1__*,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char const*) ;

int
FUNC_10(vnode_t VAR_9, const char * VAR_10, int VAR_11, vfs_context_t VAR_12)
{
 int VAR_13;

 if (!FUNC_1(VAR_9)) {
  return (VAR_3);
 }







 if ((VAR_13 = FUNC_9(VAR_10))) {
  return (VAR_13);
 }
 if (!(VAR_11 & VAR_8)) {





  VAR_13 = FUNC_7(VAR_9, ((void*)0), VAR_4, VAR_12);
  if (VAR_13)
   goto out;
 }
 VAR_13 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_13 == VAR_2 && !(VAR_11 & VAR_7)) {



  VAR_13 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12);
 }







out:
 return (VAR_13);
}
