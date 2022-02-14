
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {TYPE_2__** bufs; scalar_t__ read_buf; scalar_t__ reading; scalar_t__ streaming; TYPE_1__* int_ops; } ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ map; } ;
struct TYPE_3__ {int magic; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,...) ;

int FUNC_2(struct videobuf_queue *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4->int_ops->magic, VAR_0);

 if (VAR_4->streaming) {
  FUNC_1(1, "busy: streaming active\n");
  return 1;
 }
 if (VAR_4->reading) {
  FUNC_1(1, "busy: pending read #1\n");
  return 1;
 }
 if (VAR_4->read_buf) {
  FUNC_1(1, "busy: pending read #2\n");
  return 1;
 }
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (((void*)0) == VAR_4->bufs[VAR_5])
   continue;
  if (VAR_4->bufs[VAR_5]->map) {
   FUNC_1(1, "busy: buffer #%d mapped\n", VAR_5);
   return 1;
  }
  if (VAR_4->bufs[VAR_5]->state == VAR_2) {
   FUNC_1(1, "busy: buffer #%d queued\n", VAR_5);
   return 1;
  }
  if (VAR_4->bufs[VAR_5]->state == VAR_1) {
   FUNC_1(1, "busy: buffer #%d avtive\n", VAR_5);
   return 1;
  }
 }
 return 0;
}
