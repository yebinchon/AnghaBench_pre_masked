
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_filter_entry {struct socket_filter_entry* sfe_next_oncleanup; int sfe_refcount; } ;
typedef int SInt32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int **) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int VAR_0 ;
 struct socket_filter_entry* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_5 (struct socket_filter_entry**) ;

__attribute__((used)) static void
FUNC_6(struct socket_filter_entry *VAR_4)
{
 SInt32 VAR_5 = FUNC_0(&VAR_4->sfe_refcount);
 if (VAR_5 == 1) {



  FUNC_2(VAR_2);


  VAR_4->sfe_next_oncleanup = VAR_1;
  VAR_1 = VAR_4;


  if (VAR_4->sfe_next_oncleanup == ((void*)0)) {
   if (VAR_3 == ((void*)0)) {

    FUNC_1(VAR_0,
        ((void*)0), &VAR_3);
   } else {

    FUNC_5(&VAR_1);
   }
  }


  FUNC_3(VAR_2);
 } else if (VAR_5 <= 0) {
  FUNC_4("sflt_entry_release - sfe_refcount (%d) <= 0\n",
      (int)VAR_5);

 }
}
