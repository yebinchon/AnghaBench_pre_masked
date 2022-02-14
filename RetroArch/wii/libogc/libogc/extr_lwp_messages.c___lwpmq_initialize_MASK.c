
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int max_pendingmsgs; int max_msgsize; int wait_queue; int pending_msgs; int * msq_buffers; int inactive_msgs; scalar_t__ num_pendingmsgs; } ;
typedef TYPE_1__ mq_cntrl ;
typedef int mq_buffercntrl ;
typedef int mq_buffer ;
typedef int mq_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *,int *) ;
 int FUNC_6 (char*,TYPE_1__*,int *,int,int) ;

u32 FUNC_7(mq_cntrl *VAR_4,mq_attr *VAR_5,u32 VAR_6,u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;




 VAR_4->max_pendingmsgs = VAR_6;
 VAR_4->num_pendingmsgs = 0;
 VAR_4->max_msgsize = VAR_7;
 FUNC_5(VAR_4,((void*)0),((void*)0));

 VAR_8 = VAR_7;
 if(VAR_8&(sizeof(u32)-1))
  VAR_8 = (VAR_8+sizeof(u32))&~(sizeof(u32)-1);

 VAR_9 = VAR_6*(VAR_8+sizeof(mq_buffercntrl));
 VAR_4->msq_buffers = (mq_buffer*)FUNC_3(VAR_9);

 if(!VAR_4->msq_buffers) return 0;

 FUNC_1(&VAR_4->inactive_msgs,VAR_4->msq_buffers,VAR_6,(VAR_8+sizeof(mq_buffercntrl)));
 FUNC_0(&VAR_4->pending_msgs);
 FUNC_2(&VAR_4->wait_queue,FUNC_4(VAR_5)?VAR_3:VAR_2,VAR_1,VAR_0);

 return 1;
}
