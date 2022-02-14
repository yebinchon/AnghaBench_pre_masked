
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int context; } ;
struct rdma_cm_event {int event; int status; } ;
 int FUNC_0 (struct rdma_cm_id*) ;
 int FUNC_1 (struct rdma_cm_id*) ;
 int FUNC_2 (struct rdma_cm_id*) ;
 int FUNC_3 (struct rdma_cm_id*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int,int ,int ,struct rdma_cm_id*) ;
 int FUNC_6 (struct rdma_cm_id*) ;

__attribute__((used)) static int FUNC_7(struct rdma_cm_id *VAR_0, struct rdma_cm_event *VAR_1)
{
 int VAR_2 = 0;

 FUNC_5("event %d status %d conn %p id %p\n",
    VAR_1->event, VAR_1->status, VAR_0->context, VAR_0);

 switch (VAR_1->event) {
 case 136:
  VAR_2 = FUNC_0(VAR_0);
  break;
 case 129:
  VAR_2 = FUNC_6(VAR_0);
  break;
 case 132:
  FUNC_2(VAR_0);
  break;
 case 137:
 case 130:
 case 135:
 case 128:
 case 131:
  VAR_2 = FUNC_1(VAR_0);
  break;
 case 133:
 case 134:
 case 138:
  VAR_2 = FUNC_3(VAR_0);
  break;
 default:
  FUNC_4("Unexpected RDMA CM event (%d)\n", VAR_1->event);
  break;
 }
 return VAR_2;
}
