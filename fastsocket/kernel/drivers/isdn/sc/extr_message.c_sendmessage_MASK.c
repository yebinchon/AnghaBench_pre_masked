
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int shmem_magic; size_t shmem_pgport; int devicename; int lock; int * ioport; scalar_t__ rambase; int seq_no; scalar_t__ EngineUp; } ;
struct TYPE_7__ {size_t req_head; int * req_queue; } ;
struct TYPE_6__ {int msg_byte_cnt; unsigned int type; unsigned int class; unsigned int code; unsigned int phy_link_no; unsigned int process_id; int sequence_no; int time_stamp; int msg_data; } ;
typedef TYPE_1__ ReqMessage ;
typedef TYPE_2__ DualPortMemory ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned int*,unsigned int) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,int,...) ;
 TYPE_3__** VAR_10 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int) ;

int FUNC_10(int VAR_11,
  unsigned int VAR_12,
  unsigned int VAR_13,
  unsigned int VAR_14,
  unsigned int VAR_15,
  unsigned int VAR_16,
  unsigned int VAR_17,
  unsigned int *VAR_18)
{
 DualPortMemory *VAR_19;
 ReqMessage VAR_20;
 unsigned long VAR_21;

 if (!FUNC_0(VAR_11)) {
  FUNC_6("Invalid param: %d is not a valid card id\n", VAR_11);
  return -VAR_2;
 }





 if(VAR_10[VAR_11]->EngineUp && VAR_12 == VAR_1) {
  FUNC_6("%s: Attempt to send CM message with engine up\n",
   VAR_10[VAR_11]->devicename);
  return -VAR_3;
 }

 if(!VAR_10[VAR_11]->EngineUp && VAR_12 == VAR_0) {
  FUNC_6("%s: Attempt to send CE message with engine down\n",
   VAR_10[VAR_11]->devicename);
  return -VAR_3;
 }

 FUNC_4(&VAR_20, 0, VAR_8);
 VAR_20.msg_byte_cnt = 4;
 VAR_20.type = VAR_13;
 VAR_20.class = VAR_14;
 VAR_20.code = VAR_15;
 VAR_20.phy_link_no = VAR_16;

 if (VAR_17 > 0) {
  if (VAR_17 > VAR_7)
   VAR_17 = VAR_7;
  FUNC_2(&(VAR_20.msg_data), VAR_18, VAR_17);
  VAR_20.msg_byte_cnt = VAR_17 + 8;
 }

 VAR_20.process_id = VAR_12;
 VAR_20.sequence_no = VAR_10[VAR_11]->seq_no++ % 256;




 while (!(FUNC_1(VAR_10[VAR_11]->ioport[VAR_4]) & VAR_9))
  FUNC_9(1);




 FUNC_7(&VAR_10[VAR_11]->lock, VAR_21);
 FUNC_5((VAR_10[VAR_11]->shmem_magic >> 14) | 0x80,
  VAR_10[VAR_11]->ioport[VAR_10[VAR_11]->shmem_pgport]);
 VAR_19 = (DualPortMemory *) VAR_10[VAR_11]->rambase;
 FUNC_3(&(VAR_19->req_queue[VAR_19->req_head]),&VAR_20,VAR_8);
 VAR_19->req_head = (VAR_19->req_head+1) % VAR_6;
 FUNC_5(VAR_20.sequence_no, VAR_10[VAR_11]->ioport[VAR_5]);
 FUNC_8(&VAR_10[VAR_11]->lock, VAR_21);

 FUNC_6("%s: Sent Message seq:%d pid:%d time:%d "
   "cnt:%d (type,class,code):(%d,%d,%d) "
   "link:%d\n ",
    VAR_10[VAR_11]->devicename,
    VAR_20.sequence_no,
    VAR_20.process_id,
    VAR_20.time_stamp,
    VAR_20.msg_byte_cnt,
    VAR_20.type,
    VAR_20.class,
    VAR_20.code,
    VAR_20.phy_link_no);

 return 0;
}
