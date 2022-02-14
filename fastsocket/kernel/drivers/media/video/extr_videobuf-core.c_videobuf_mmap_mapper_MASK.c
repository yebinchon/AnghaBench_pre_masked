
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_pgoff; } ;
struct videobuf_queue {struct videobuf_buffer** bufs; TYPE_1__* int_ops; } ;
struct videobuf_buffer {scalar_t__ memory; int boff; } ;
struct TYPE_2__ {int magic; } ;


 int FUNC_0 (struct videobuf_queue*,int ,struct videobuf_queue*,struct videobuf_buffer*,struct vm_area_struct*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,char*) ;
 int VAR_7 ;
 int FUNC_3 (struct videobuf_queue*) ;
 int FUNC_4 (struct videobuf_queue*) ;

int FUNC_5(struct videobuf_queue *VAR_8, struct vm_area_struct *VAR_9)
{
 int VAR_10 = -VAR_0;
 int VAR_11;

 FUNC_1(VAR_8->int_ops->magic, VAR_1);

 if (!(VAR_9->vm_flags & VAR_6) || !(VAR_9->vm_flags & VAR_5)) {
  FUNC_2(1, "mmap appl bug: PROT_WRITE and MAP_SHARED are required\n");
  return -VAR_0;
 }

 FUNC_3(VAR_8);
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  struct videobuf_buffer *VAR_12 = VAR_8->bufs[VAR_11];

  if (VAR_12 && VAR_12->memory == VAR_3 &&
    VAR_12->boff == (VAR_9->vm_pgoff << VAR_2)) {
   VAR_10 = FUNC_0(VAR_8, VAR_7, VAR_8, VAR_12, VAR_9);
   break;
  }
 }
 FUNC_4(VAR_8);

 return VAR_10;
}
