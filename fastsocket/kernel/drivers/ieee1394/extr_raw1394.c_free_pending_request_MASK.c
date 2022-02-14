
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_request {int packet; struct pending_request* data; scalar_t__ free_data; struct pending_request* ibs; int data_size; int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct pending_request*) ;

__attribute__((used)) static void FUNC_4(struct pending_request *VAR_1)
{
 if (VAR_1->ibs) {
  if (FUNC_0(&VAR_1->ibs->refcount)) {
   FUNC_1(VAR_1->ibs->data_size, &VAR_0);
   FUNC_3(VAR_1->ibs);
  }
 } else if (VAR_1->free_data) {
  FUNC_3(VAR_1->data);
 }
 FUNC_2(VAR_1->packet);
 FUNC_3(VAR_1);
}
