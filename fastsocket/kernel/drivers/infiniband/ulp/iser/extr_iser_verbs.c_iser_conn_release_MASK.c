
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_device {int dummy; } ;
struct iser_conn {scalar_t__ state; int ep; int * cma_id; struct iser_device* device; int conn_list; } ;
struct TYPE_2__ {int connlist_mutex; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iser_device*) ;
 int FUNC_3 (struct iser_conn*) ;
 int FUNC_4 (struct iser_conn*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct iser_conn *VAR_2, int VAR_3)
{
 struct iser_device *VAR_4 = VAR_2->device;

 FUNC_0(VAR_2->state != VAR_0);

 FUNC_6(&VAR_1.connlist_mutex);
 FUNC_5(&VAR_2->conn_list);
 FUNC_7(&VAR_1.connlist_mutex);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 VAR_2->device = ((void*)0);

 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_4);

 if (VAR_2->cma_id != ((void*)0) && VAR_3) {
  FUNC_8(VAR_2->cma_id);
  VAR_2->cma_id = ((void*)0);
 }
 FUNC_1(VAR_2->ep);
}
