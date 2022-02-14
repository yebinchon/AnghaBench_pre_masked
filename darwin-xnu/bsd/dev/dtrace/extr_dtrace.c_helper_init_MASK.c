
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int ,int ,int ,int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

void
FUNC_5( void )
{






 if (!VAR_5) {
  FUNC_3("helper_init before dtrace_init\n");
 }

 if (0 >= VAR_7)
 {
  VAR_7 = FUNC_0(VAR_3, &VAR_6);

  if (VAR_7 < 0) {
   FUNC_4("helper_init: failed to allocate a major number!\n");
   return;
  }

  if (((void*)0) == FUNC_1( FUNC_2(VAR_7, 0), VAR_0, VAR_4, VAR_2, 0666,
     VAR_1, 0 )) {
   FUNC_4("dtrace_init: failed to devfs_make_node for helper!\n");
   return;
  }
 } else
  FUNC_3("helper_init: called twice!\n");
}
