
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;
struct cx25821_fh {int type; struct videobuf_queue vidq; } ;


 int FUNC_0 () ;


struct videobuf_queue *FUNC_1(struct cx25821_fh *VAR_0)
{
 switch (VAR_0->type) {
 case 128:
  return &VAR_0->vidq;
 default:
  FUNC_0();
  return ((void*)0);
 }
}
