
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct iser_conn {scalar_t__ state; int * cma_id; int conn_list; int wait; int * device; int name; } ;
struct TYPE_4__ {int connlist_mutex; int connlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct iser_conn*) ;
 int FUNC_3 (struct iser_conn*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,TYPE_1__*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,void*,int ,int ) ;
 int FUNC_10 (int *,struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_11 (int ,char*,int *,int) ;
 int FUNC_12 (int ,int) ;

int FUNC_13(struct iser_conn *VAR_8,
   struct sockaddr_in *VAR_9,
   struct sockaddr_in *VAR_10,
   int VAR_11)
{
 struct sockaddr *VAR_12, *VAR_13;
 int VAR_14 = 0;

 FUNC_11(VAR_8->name, "%pI4:%d",
  &VAR_10->sin_addr.s_addr, VAR_10->sin_port);


 VAR_8->device = ((void*)0);

 FUNC_5("connecting to: %pI4, port 0x%x\n",
    &VAR_10->sin_addr, VAR_10->sin_port);

 VAR_8->state = VAR_3;

 FUNC_2(VAR_8);
 VAR_8->cma_id = FUNC_9(VAR_7,
          (void *)VAR_8,
          VAR_5, VAR_1);
 if (FUNC_0(VAR_8->cma_id)) {
  VAR_14 = FUNC_1(VAR_8->cma_id);
  FUNC_4("rdma_create_id failed: %d\n", VAR_14);
  goto id_failure;
 }

 VAR_12 = (struct sockaddr *)VAR_9;
 VAR_13 = (struct sockaddr *)VAR_10;
 VAR_14 = FUNC_10(VAR_8->cma_id, VAR_12, VAR_13, 1000);
 if (VAR_14) {
  FUNC_4("rdma_resolve_addr failed: %d\n", VAR_14);
  goto addr_failure;
 }

 if (!VAR_11) {
  FUNC_12(VAR_8->wait,
      (VAR_8->state != VAR_3));

  if (VAR_8->state != VAR_4) {
   VAR_14 = -VAR_0;
   goto connect_failure;
  }
 }

 FUNC_7(&VAR_6.connlist_mutex);
 FUNC_6(&VAR_8->conn_list, &VAR_6.connlist);
 FUNC_8(&VAR_6.connlist_mutex);
 return 0;

id_failure:
 VAR_8->cma_id = ((void*)0);
addr_failure:
 VAR_8->state = VAR_2;
 FUNC_3(VAR_8, 1);
connect_failure:
 FUNC_3(VAR_8, 1);
 return VAR_14;
}
