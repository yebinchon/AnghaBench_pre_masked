
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_space {int dummy; } ;
struct ipc_pset {int dummy; } ;
struct ipc_port {int dummy; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_3 () ;
 int VAR_15 ;
 int FUNC_4 () ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int,int,int,char*) ;
 int FUNC_15 (int ,int ,int ) ;

void
FUNC_16(void)
{
 kern_return_t VAR_22;

 FUNC_9(&VAR_13);
 FUNC_10(&VAR_12, "ipc", &VAR_13);
 FUNC_8(&VAR_11);

 FUNC_4();

 VAR_16 = 0;



 VAR_21 = FUNC_14(sizeof(struct ipc_space),
          VAR_19 * sizeof(struct ipc_space),
          sizeof(struct ipc_space),
          "ipc spaces");
 FUNC_15(VAR_21, VAR_9, VAR_6);




 VAR_14[VAR_2] =
  FUNC_14(sizeof(struct ipc_port),
        VAR_15 * sizeof(struct ipc_port),
        sizeof(struct ipc_port),
        "ipc ports");

 FUNC_15(VAR_14[VAR_2], VAR_8, VAR_0);
 FUNC_15(VAR_14[VAR_2], VAR_9, VAR_6);

 VAR_14[VAR_3] =
  FUNC_14(sizeof(struct ipc_pset),
        VAR_17 * sizeof(struct ipc_pset),
        sizeof(struct ipc_pset),
        "ipc port sets");
 FUNC_15(VAR_14[VAR_3], VAR_9, VAR_6);





 VAR_10 = FUNC_14(VAR_1,
         VAR_15 * VAR_5 *
         VAR_1,
         VAR_1,
         "ipc kmsgs");
 FUNC_15(VAR_10, VAR_8, VAR_0);
 FUNC_15(VAR_10, VAR_7, VAR_6);



 VAR_22 = FUNC_5(&VAR_18);
 FUNC_0(VAR_22 == VAR_4);


 VAR_22 = FUNC_5(&VAR_20);
 FUNC_0(VAR_22 == VAR_4);






 FUNC_11();
 FUNC_6();
 FUNC_7();





 FUNC_13();
 FUNC_12();
 FUNC_1();
}
