
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vnode_t ;
typedef int * vfs_context_t ;
typedef int boolean_t ;
struct TYPE_2__ {int kdebug_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(vnode_t VAR_3, vfs_context_t VAR_4)
{
 int VAR_5 = 0;
 boolean_t VAR_6;

 FUNC_3();
 FUNC_0(VAR_4 != ((void*)0));

 VAR_6 = (VAR_2.kdebug_flags & VAR_1);

 VAR_5 = FUNC_2(VAR_6, VAR_3, VAR_4);
 if (VAR_5 == 0) {
  if (VAR_6) {
   FUNC_1();
  } else {
   VAR_5 = VAR_0;
  }
 }

 return VAR_5;
}
