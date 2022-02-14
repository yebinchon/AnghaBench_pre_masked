
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int address; int type; int length; int misc; void* error; int generation; int sendb; } ;
struct pending_request {TYPE_1__ req; int list; struct hpsb_packet* packet; int * data; } ;
struct hpsb_packet {int generation; int * data; int * header; } ;
struct file_info {int reqlists_lock; int req_pending; int host; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;





 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct hpsb_packet*) ;
 struct hpsb_packet* FUNC_3 (int ,int,int,int,int *,int ) ;
 struct hpsb_packet* FUNC_4 (int ,int,int,int,int *,int ) ;
 struct hpsb_packet* FUNC_5 (int ,int,int,int) ;
 struct hpsb_packet* FUNC_6 (int ,int *,int,int,int,int) ;
 struct hpsb_packet* FUNC_7 (int ,int,int,int *,int) ;
 scalar_t__ FUNC_8 (struct hpsb_packet*) ;
 int FUNC_9 (struct hpsb_packet*,void (*) (void*),struct pending_request*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (struct pending_request*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_15(struct file_info *VAR_8,
    struct pending_request *VAR_9, int VAR_10)
{
 unsigned long VAR_11;
 struct hpsb_packet *VAR_12 = ((void*)0);
 u64 VAR_13 = VAR_9->req.address & 0xffffffffffffULL;

 switch (VAR_9->req.type) {
 case 132:
  FUNC_0("read_request called");
  VAR_12 =
      FUNC_5(VAR_8->host, VAR_10, VAR_13, VAR_9->req.length);

  if (!VAR_12)
   return -VAR_0;

  if (VAR_9->req.length == 4)
   VAR_9->data = &VAR_12->header[3];
  else
   VAR_9->data = VAR_12->data;

  break;

 case 130:
  FUNC_0("write_request called");

  VAR_12 = FUNC_7(VAR_8->host, VAR_10, VAR_13, ((void*)0),
            VAR_9->req.length);
  if (!VAR_12)
   return -VAR_0;

  if (VAR_9->req.length == 4) {
   if (FUNC_1
       (&VAR_12->header[3], FUNC_10(VAR_9->req.sendb),
        VAR_9->req.length))
    VAR_9->req.error = VAR_4;
  } else {
   if (FUNC_1
       (VAR_12->data, FUNC_10(VAR_9->req.sendb),
        VAR_9->req.length))
    VAR_9->req.error = VAR_4;
  }

  VAR_9->req.length = 0;
  break;

 case 131:
  FUNC_0("stream_request called");

  VAR_12 =
      FUNC_6(VAR_8->host, ((void*)0), VAR_9->req.length,
        VAR_10 & 0x3f ,
        (VAR_9->req.misc >> 16) & 0x3,
        VAR_9->req.misc & 0xf);
  if (!VAR_12)
   return -VAR_0;

  if (FUNC_1(VAR_12->data, FUNC_10(VAR_9->req.sendb),
       VAR_9->req.length))
   VAR_9->req.error = VAR_4;

  VAR_9->req.length = 0;
  break;

 case 129:
  FUNC_0("lock_request called");
  if ((VAR_9->req.misc == VAR_1)
      || (VAR_9->req.misc == VAR_2)) {
   if (VAR_9->req.length != 4) {
    VAR_9->req.error = VAR_3;
    break;
   }
  } else {
   if (VAR_9->req.length != 8) {
    VAR_9->req.error = VAR_3;
    break;
   }
  }

  VAR_12 = FUNC_4(VAR_8->host, VAR_10, VAR_13,
           VAR_9->req.misc, ((void*)0), 0);
  if (!VAR_12)
   return -VAR_0;

  if (FUNC_1(VAR_12->data, FUNC_10(VAR_9->req.sendb),
       VAR_9->req.length)) {
   VAR_9->req.error = VAR_4;
   break;
  }

  VAR_9->data = VAR_12->data;
  VAR_9->req.length = 4;
  break;

 case 128:
  FUNC_0("lock64_request called");
  if ((VAR_9->req.misc == VAR_1)
      || (VAR_9->req.misc == VAR_2)) {
   if (VAR_9->req.length != 8) {
    VAR_9->req.error = VAR_3;
    break;
   }
  } else {
   if (VAR_9->req.length != 16) {
    VAR_9->req.error = VAR_3;
    break;
   }
  }
  VAR_12 = FUNC_3(VAR_8->host, VAR_10, VAR_13,
      VAR_9->req.misc, ((void*)0), 0);
  if (!VAR_12)
   return -VAR_0;

  if (FUNC_1(VAR_12->data, FUNC_10(VAR_9->req.sendb),
       VAR_9->req.length)) {
   VAR_9->req.error = VAR_4;
   break;
  }

  VAR_9->data = VAR_12->data;
  VAR_9->req.length = 8;
  break;

 default:
  VAR_9->req.error = VAR_6;
 }

 VAR_9->packet = VAR_12;

 if (VAR_9->req.error) {
  VAR_9->req.length = 0;
  FUNC_12(VAR_9);
  return 0;
 }

 FUNC_9(VAR_12,
          (void (*)(void *))VAR_7, VAR_9);

 FUNC_13(&VAR_8->reqlists_lock, VAR_11);
 FUNC_11(&VAR_9->list, &VAR_8->req_pending);
 FUNC_14(&VAR_8->reqlists_lock, VAR_11);

 VAR_12->generation = VAR_9->req.generation;

 if (FUNC_8(VAR_12) < 0) {
  VAR_9->req.error = VAR_5;
  VAR_9->req.length = 0;
  FUNC_2(VAR_12);
  FUNC_12(VAR_9);
 }
 return 0;
}
