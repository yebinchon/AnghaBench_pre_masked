
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct necp_fd_data {int dummy; } ;
struct necp_client_flow_registration {int dummy; } ;
struct necp_client_flow {int dummy; } ;
typedef int errno_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 () ;
 int * FUNC_4 (char*,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *,int *) ;
 void* FUNC_7 (int ,int,int,int ,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int ,int *,int ,int ) ;
 int * FUNC_10 (int,int,int ,int ) ;

errno_t
FUNC_11(void)
{
 VAR_15 = FUNC_5();
 if (VAR_15 == ((void*)0)) {
  FUNC_8("lck_grp_attr_alloc_init failed\n");

 }

 VAR_19 = FUNC_4("necp_fd", VAR_15);
 if (VAR_19 == ((void*)0)) {
  FUNC_8("lck_grp_alloc_init failed\n");

 }

 VAR_18 = FUNC_3();
 if (VAR_18 == ((void*)0)) {
  FUNC_8("lck_attr_alloc_init failed\n");

 }

 VAR_7 = sizeof(struct necp_fd_data);
 VAR_8 = FUNC_10(VAR_7,
        VAR_1 * VAR_7,
        0, VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_8("zinit(necp_client_fd) failed\n");

 }

 VAR_24 = sizeof(struct necp_client_flow);
 VAR_21 = FUNC_7(VAR_4, VAR_24, sizeof (uint64_t), 0, VAR_0);
 if (VAR_21 == ((void*)0)) {
  FUNC_8("mcache_create(necp_flow_cache) failed\n");

 }

 VAR_23 = sizeof(struct necp_client_flow_registration);
 VAR_22 = FUNC_7(VAR_3, VAR_23, sizeof (uint64_t), 0, VAR_0);
 if (VAR_22 == ((void*)0)) {
  FUNC_8("mcache_create(necp_client_flow_registration) failed\n");

 }

 VAR_12 = FUNC_9(VAR_27, ((void*)0),
                 VAR_6, VAR_5);
 FUNC_2(VAR_12 != ((void*)0));

 FUNC_6(&VAR_17, VAR_19, VAR_18);
 FUNC_6(&VAR_26, VAR_19, VAR_18);
 FUNC_6(&VAR_11, VAR_19, VAR_18);
    FUNC_6(&VAR_25, VAR_19, VAR_18);
 FUNC_6(&VAR_14, VAR_19, VAR_18);

 FUNC_0(&VAR_16);
 FUNC_0(&VAR_20);
 FUNC_0(&VAR_13);

 FUNC_1(&VAR_10);
 FUNC_1(&VAR_9);

 return (0);
}
