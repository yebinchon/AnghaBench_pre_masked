
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_6__ {int devicename; TYPE_1__* channel; } ;
struct TYPE_5__ {int msg_len; scalar_t__ buff_offset; } ;
struct TYPE_4__ {int next_sendbuf; int num_sendbufs; int free_sendbufs; scalar_t__ first_sendbuf; } ;
typedef TYPE_2__ LLData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int,char*) ;
 int FUNC_4 (int,char*,int ,int) ;
 int FUNC_5 (char*,int,...) ;
 TYPE_3__** VAR_8 ;
 int FUNC_6 (int,int ,int ,int ,int ,int,int,unsigned int*) ;

int FUNC_7(int VAR_9, int VAR_10, int VAR_11, struct sk_buff *VAR_12)
{
 LLData VAR_13;
 int VAR_14;
 int VAR_15;
 unsigned long VAR_16;

 VAR_15 = FUNC_2(VAR_9);

 if(!FUNC_0(VAR_15)) {
  FUNC_5("invalid param: %d is not a valid card id\n", VAR_15);
  return -VAR_3;
 }

 FUNC_5("%s: sndpkt: frst = 0x%lx nxt = %d  f = %d n = %d\n",
  VAR_8[VAR_15]->devicename,
  VAR_8[VAR_15]->channel[VAR_10].first_sendbuf,
  VAR_8[VAR_15]->channel[VAR_10].next_sendbuf,
  VAR_8[VAR_15]->channel[VAR_10].free_sendbufs,
  VAR_8[VAR_15]->channel[VAR_10].num_sendbufs);

 if(!VAR_8[VAR_15]->channel[VAR_10].free_sendbufs) {
  FUNC_5("%s: out of TX buffers\n",
    VAR_8[VAR_15]->devicename);
  return -VAR_2;
 }

 if(VAR_12->len > VAR_0) {
  FUNC_5("%s: data overflows buffer size (data > buffer)\n",
   VAR_8[VAR_15]->devicename);
  return -VAR_2;
 }

 VAR_13.buff_offset = VAR_8[VAR_15]->channel[VAR_10].next_sendbuf *
  VAR_0 + VAR_8[VAR_15]->channel[VAR_10].first_sendbuf;
 VAR_13.msg_len = VAR_12->len;
 FUNC_5("%s: writing %d bytes to buffer offset 0x%lx\n",
   VAR_8[VAR_15]->devicename,
   VAR_13.msg_len, VAR_13.buff_offset);
 FUNC_4(VAR_15, (char *)VAR_13.buff_offset, VAR_12->data, VAR_13.msg_len);




 FUNC_5("%s: sndpkt size=%d, buf_offset=0x%lx buf_indx=%d\n",
  VAR_8[VAR_15]->devicename,
  VAR_13.msg_len, VAR_13.buff_offset,
  VAR_8[VAR_15]->channel[VAR_10].next_sendbuf);

 VAR_14 = FUNC_6(VAR_15, VAR_1, VAR_7, VAR_5, VAR_6,
    VAR_10+1, sizeof(LLData), (unsigned int*)&VAR_13);
 VAR_16 = VAR_12->len;
 if(VAR_14) {
  FUNC_5("%s: failed to send packet, status = %d\n",
    VAR_8[VAR_15]->devicename, VAR_14);
  return -1;
 }
 else {
  VAR_8[VAR_15]->channel[VAR_10].free_sendbufs--;
  VAR_8[VAR_15]->channel[VAR_10].next_sendbuf =
   ++VAR_8[VAR_15]->channel[VAR_10].next_sendbuf ==
   VAR_8[VAR_15]->channel[VAR_10].num_sendbufs ? 0 :
   VAR_8[VAR_15]->channel[VAR_10].next_sendbuf;
   FUNC_5("%s: packet sent successfully\n", VAR_8[VAR_15]->devicename);
  FUNC_1(VAR_12);
  FUNC_3(VAR_15,VAR_4,VAR_10, (char *)&VAR_16);
 }
 return VAR_16;
}
