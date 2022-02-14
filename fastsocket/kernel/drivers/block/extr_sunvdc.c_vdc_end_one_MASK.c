
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vio_dring_state {unsigned int cons; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct vio_disk_desc {int size; scalar_t__ status; TYPE_2__ hdr; int ncookies; int cookies; } ;
struct vdc_req_entry {struct request* req; } ;
struct TYPE_4__ {int lp; } ;
struct vdc_port {TYPE_3__* disk; TYPE_1__ vio; struct vdc_req_entry* rq_arr; } ;
struct request {int dummy; } ;
struct TYPE_6__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct request*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct vdc_port*,struct vio_disk_desc*) ;
 struct vio_disk_desc* FUNC_6 (struct vio_dring_state*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct vdc_port *VAR_4, struct vio_dring_state *VAR_5,
   unsigned int VAR_6)
{
 struct vio_disk_desc *VAR_7 = FUNC_6(VAR_5, VAR_6);
 struct vdc_req_entry *VAR_8 = &VAR_4->rq_arr[VAR_6];
 struct request *VAR_9;

 if (FUNC_4(VAR_7->hdr.state != VAR_2))
  return;

 FUNC_3(VAR_4->vio.lp, VAR_7->cookies, VAR_7->ncookies);
 VAR_7->hdr.state = VAR_3;
 VAR_5->cons = (VAR_6 + 1) & (VAR_1 - 1);

 VAR_9 = VAR_8->req;
 if (VAR_9 == ((void*)0)) {
  FUNC_5(VAR_4, VAR_7);
  return;
 }

 VAR_8->req = ((void*)0);

 FUNC_0(VAR_9, (VAR_7->status ? -VAR_0 : 0), VAR_7->size);

 if (FUNC_1(VAR_4->disk->queue))
  FUNC_2(VAR_4->disk->queue);
}
