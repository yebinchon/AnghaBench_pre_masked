
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (char*) ;

void
FUNC_7(void) {



        VAR_5 = FUNC_3();
 VAR_4 = FUNC_2("cluster I/O", VAR_5);




 VAR_3 = FUNC_1();

 VAR_6 = FUNC_4(VAR_4, VAR_3);

 if (VAR_6 == ((void*)0))
         FUNC_6("cluster_init: failed to allocate cl_transaction_mtxp");

 FUNC_5(&VAR_2, VAR_4, VAR_3);

 for (int VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
  FUNC_0(&VAR_1[VAR_7]);
}
