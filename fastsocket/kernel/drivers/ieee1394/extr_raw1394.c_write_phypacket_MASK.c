
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ length; int error; int generation; scalar_t__ sendb; } ;
struct pending_request {TYPE_1__ req; int list; struct hpsb_packet* packet; } ;
struct hpsb_packet {int generation; } ;
struct file_info {int reqlists_lock; int req_pending; int host; } ;
typedef int quadlet_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct hpsb_packet* FUNC_2 (int ,int) ;
 int FUNC_3 (struct hpsb_packet*) ;
 int FUNC_4 (struct hpsb_packet*,void (*) (void*),struct pending_request*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct pending_request*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct file_info *VAR_3, struct pending_request *VAR_4)
{
 struct hpsb_packet *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 quadlet_t VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_1((u32) VAR_4->req.sendb);
 FUNC_0("write_phypacket called - quadlet 0x%8.8x ", VAR_7);
 VAR_5 = FUNC_2(VAR_3->host, VAR_7);
 if (!VAR_5)
  return -VAR_0;
 VAR_4->req.length = 0;
 VAR_4->packet = VAR_5;
 FUNC_4(VAR_5,
          (void (*)(void *))VAR_2, VAR_4);
 FUNC_7(&VAR_3->reqlists_lock, VAR_8);
 FUNC_5(&VAR_4->list, &VAR_3->req_pending);
 FUNC_8(&VAR_3->reqlists_lock, VAR_8);
 VAR_5->generation = VAR_4->req.generation;
 VAR_6 = FUNC_3(VAR_5);
 FUNC_0("write_phypacket send_packet called => retval: %d ", VAR_6);
 if (VAR_6 < 0) {
  VAR_4->req.error = VAR_1;
  VAR_4->req.length = 0;
  FUNC_6(VAR_4);
 }
 return 0;
}
