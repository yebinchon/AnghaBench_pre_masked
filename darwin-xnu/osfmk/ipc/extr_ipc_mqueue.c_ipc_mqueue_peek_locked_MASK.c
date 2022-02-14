
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ mach_port_seqno_t ;
typedef int mach_msg_size_t ;
typedef int mach_msg_max_trailer_t ;
typedef int mach_msg_id_t ;
typedef TYPE_2__* ipc_mqueue_t ;
typedef TYPE_3__* ipc_kmsg_t ;
typedef int * ipc_kmsg_queue_t ;
struct TYPE_13__ {TYPE_1__* ikm_header; } ;
struct TYPE_12__ {scalar_t__ imq_seqno; scalar_t__ imq_msgcount; int imq_messages; } ;
struct TYPE_11__ {int msgh_size; int msgh_id; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (int ) ;

unsigned
FUNC_6(ipc_mqueue_t VAR_1,
         mach_port_seqno_t * VAR_2,
         mach_msg_size_t * VAR_3,
         mach_msg_id_t * VAR_4,
         mach_msg_max_trailer_t * VAR_5,
         ipc_kmsg_t *VAR_6)
{
 ipc_kmsg_queue_t VAR_7;
 ipc_kmsg_t VAR_8;
 mach_port_seqno_t VAR_9, VAR_10;
 unsigned VAR_11 = 0;

 FUNC_0(!FUNC_1(VAR_1));

 VAR_9 = 0;
 if (VAR_2 != ((void*)0))
  VAR_9 = *VAR_2;

 if (VAR_9 == 0) {
  VAR_9 = VAR_1->imq_seqno;
  VAR_10 = 0;
 } else if (VAR_9 >= VAR_1->imq_seqno &&
     VAR_9 < VAR_1->imq_seqno + VAR_1->imq_msgcount) {
  VAR_10 = VAR_9 - VAR_1->imq_seqno;
 } else
  goto out;


 VAR_7 = &VAR_1->imq_messages;
 VAR_8 = FUNC_2(VAR_7);
 while (VAR_10-- && VAR_8 != VAR_0) {
  VAR_8 = FUNC_3(VAR_7, VAR_8);
 }
 if (VAR_8 == VAR_0)
  goto out;


 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_9;
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_8->ikm_header->msgh_size;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_8->ikm_header->msgh_id;
 if (VAR_5 != ((void*)0))
  FUNC_4(VAR_5,
         (mach_msg_max_trailer_t *)((vm_offset_t)VAR_8->ikm_header +
        FUNC_5(VAR_8->ikm_header->msgh_size)),
         sizeof(mach_msg_max_trailer_t));
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8;

 VAR_11 = 1;

out:
 return VAR_11;
}
