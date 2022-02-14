
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {TYPE_2__** bufs; TYPE_1__* int_ops; } ;
typedef enum v4l2_memory { ____Placeholder_v4l2_memory } v4l2_memory ;
struct TYPE_4__ {unsigned int i; int memory; unsigned int bsize; unsigned int boff; int input; } ;
struct TYPE_3__ {int magic; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_2 ;



 int FUNC_2 (struct videobuf_queue*) ;
 int FUNC_3 (int,char*,unsigned int,unsigned int) ;
 TYPE_2__* FUNC_4 (struct videobuf_queue*) ;

int FUNC_5(struct videobuf_queue *VAR_3,
   unsigned int VAR_4, unsigned int VAR_5,
   enum v4l2_memory VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;

 FUNC_0(VAR_3->int_ops->magic, VAR_1);

 VAR_8 = FUNC_2(VAR_3);
 if (0 != VAR_8)
  return VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_3->bufs[VAR_7] = FUNC_4(VAR_3);

  if (((void*)0) == VAR_3->bufs[VAR_7])
   break;

  VAR_3->bufs[VAR_7]->i = VAR_7;
  VAR_3->bufs[VAR_7]->input = VAR_2;
  VAR_3->bufs[VAR_7]->memory = VAR_6;
  VAR_3->bufs[VAR_7]->bsize = VAR_5;
  switch (VAR_6) {
  case 130:
   VAR_3->bufs[VAR_7]->boff = FUNC_1(VAR_5) * VAR_7;
   break;
  case 128:
  case 129:

   break;
  }
 }

 if (!VAR_7)
  return -VAR_0;

 FUNC_3(1, "mmap setup: %d buffers, %d bytes each\n", VAR_7, VAR_5);

 return VAR_7;
}
