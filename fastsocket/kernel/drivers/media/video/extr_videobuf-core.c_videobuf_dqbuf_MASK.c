
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {int type; TYPE_1__* int_ops; } ;
struct videobuf_buffer {int state; int stream; } ;
struct v4l2_buffer {int flags; } ;
struct TYPE_2__ {int magic; } ;


 int FUNC_0 (struct videobuf_queue*,int ,struct videobuf_queue*,struct videobuf_buffer*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_buffer*,int ,int) ;
 int FUNC_5 (struct videobuf_queue*,struct videobuf_buffer**,int) ;
 int VAR_4 ;
 int FUNC_6 (struct videobuf_queue*) ;
 int FUNC_7 (struct videobuf_queue*) ;
 int FUNC_8 (struct videobuf_queue*,struct v4l2_buffer*,struct videobuf_buffer*,int ) ;

int FUNC_9(struct videobuf_queue *VAR_5,
     struct v4l2_buffer *VAR_6, int VAR_7)
{
 struct videobuf_buffer *VAR_8 = ((void*)0);
 int VAR_9;

 FUNC_1(VAR_5->int_ops->magic, VAR_1);

 FUNC_4(VAR_6, 0, sizeof(*VAR_6));
 FUNC_6(VAR_5);

 VAR_9 = FUNC_5(VAR_5, &VAR_8, VAR_7);
 if (VAR_9 < 0) {
  FUNC_2(1, "dqbuf: next_buffer error: %i\n", VAR_9);
  goto done;
 }

 switch (VAR_8->state) {
 case 128:
  FUNC_2(1, "dqbuf: state is error\n");
  break;
 case 129:
  FUNC_2(1, "dqbuf: state is done\n");
  break;
 default:
  FUNC_2(1, "dqbuf: state invalid\n");
  VAR_9 = -VAR_0;
  goto done;
 }
 FUNC_0(VAR_5, VAR_4, VAR_5, VAR_8);
 FUNC_8(VAR_5, VAR_6, VAR_8, VAR_5->type);
 FUNC_3(&VAR_8->stream);
 VAR_8->state = VAR_3;
 VAR_6->flags &= ~VAR_2;
done:
 FUNC_7(VAR_5);
 return VAR_9;
}
