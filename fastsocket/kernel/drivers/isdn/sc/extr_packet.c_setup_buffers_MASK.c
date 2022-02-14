
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int ramsize; int devicename; TYPE_1__* channel; } ;
struct TYPE_5__ {unsigned int buff_offset; unsigned int msg_len; } ;
struct TYPE_4__ {unsigned int first_sendbuf; unsigned int num_sendbufs; unsigned int free_sendbufs; unsigned int next_sendbuf; } ;
typedef TYPE_2__ LLData ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int,...) ;
 TYPE_3__** VAR_8 ;
 int FUNC_2 (int,int ,int ,int ,int ,int,int,unsigned int*) ;

int FUNC_3(int VAR_9, int VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;
 LLData VAR_15;

 if(!FUNC_0(VAR_9)) {
  FUNC_1("invalid param: %d is not a valid card id\n", VAR_9);
  return -VAR_4;
 }




 FUNC_1("%s: setting up channel buffer space in shared RAM\n",
   VAR_8[VAR_9]->devicename);
 VAR_14 = VAR_2;
 VAR_11 = ((VAR_8[VAR_9]->ramsize - VAR_1) / VAR_14) / 2;
 VAR_11 = VAR_11 > VAR_0 ? VAR_0 : VAR_11;
 FUNC_1("%s: calculating buffer space: %d buffers, %d big\n",
  VAR_8[VAR_9]->devicename,
  VAR_11, VAR_14);
 if(VAR_11 < 2) {
  FUNC_1("%s: not enough buffer space\n",
   VAR_8[VAR_9]->devicename);
  return -1;
 }
 VAR_13 = (VAR_11 * VAR_14) * (VAR_10 - 1);
 FUNC_1("%s: channel buffer offset from shared RAM: 0x%x\n",
   VAR_8[VAR_9]->devicename, VAR_13);
 VAR_8[VAR_9]->channel[VAR_10-1].first_sendbuf = VAR_1 + VAR_13;
 VAR_8[VAR_9]->channel[VAR_10-1].num_sendbufs = VAR_11 / 2;
 VAR_8[VAR_9]->channel[VAR_10-1].free_sendbufs = VAR_11 / 2;
 VAR_8[VAR_9]->channel[VAR_10-1].next_sendbuf = 0;
 FUNC_1("%s: send buffer setup complete: first=0x%lx n=%d f=%d, nxt=%d\n",
    VAR_8[VAR_9]->devicename,
    VAR_8[VAR_9]->channel[VAR_10-1].first_sendbuf,
    VAR_8[VAR_9]->channel[VAR_10-1].num_sendbufs,
    VAR_8[VAR_9]->channel[VAR_10-1].free_sendbufs,
    VAR_8[VAR_9]->channel[VAR_10-1].next_sendbuf);




 FUNC_1("%s: adding %d RecvBuffers:\n",
   VAR_8[VAR_9]->devicename, VAR_11 /2);
 for (VAR_12 = 0 ; VAR_12 < VAR_11 / 2; VAR_12++) {
  VAR_15.buff_offset =
   ((VAR_8[VAR_9]->channel[VAR_10-1].first_sendbuf +
   (VAR_11 / 2) * VAR_14) + (VAR_14 * VAR_12));
  VAR_15.msg_len = VAR_14;
  FUNC_1("%s: adding RcvBuffer #%d offset=0x%lx sz=%d bufsz:%d\n",
    VAR_8[VAR_9]->devicename,
    VAR_12 + 1, VAR_15.buff_offset,
    VAR_15.msg_len,VAR_14);
  FUNC_2(VAR_9, VAR_3, VAR_7, VAR_5, VAR_6,
    VAR_10, sizeof(LLData), (unsigned int *)&VAR_15);
 }
 return 0;
}
