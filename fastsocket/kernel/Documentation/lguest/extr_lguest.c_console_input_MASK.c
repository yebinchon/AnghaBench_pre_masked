
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num; } ;
struct virtqueue {TYPE_2__ vring; TYPE_1__* dev; } ;
struct timeval {scalar_t__ tv_sec; } ;
struct iovec {scalar_t__ iov_base; } ;
struct console_abort {int count; struct timeval start; } ;
struct TYPE_3__ {struct console_abort* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct virtqueue*,unsigned int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct iovec*,unsigned int) ;
 unsigned int FUNC_6 (struct virtqueue*,struct iovec*,unsigned int*,unsigned int*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct virtqueue *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;
 struct console_abort *VAR_7 = VAR_2->dev->priv;
 struct iovec VAR_8[VAR_2->vring.num];


 VAR_4 = FUNC_6(VAR_2, VAR_8, &VAR_6, &VAR_5);
 if (VAR_6)
  FUNC_1(1, "Output buffers in console in queue?");


 VAR_3 = FUNC_5(VAR_1, VAR_8, VAR_5);
 if (VAR_3 <= 0) {

  FUNC_7("Failed to get console input, ignoring console.");




  for (;;)
   FUNC_4();
 }


 FUNC_0(VAR_2, VAR_4, VAR_3);
 if (VAR_3 != 1 || ((char *)VAR_8[0].iov_base)[0] != 3) {
  VAR_7->count = 0;
  return;
 }

 VAR_7->count++;
 if (VAR_7->count == 1)
  FUNC_2(&VAR_7->start, ((void*)0));
 else if (VAR_7->count == 3) {
  struct timeval VAR_9;
  FUNC_2(&VAR_9, ((void*)0));

  if (VAR_9.tv_sec <= VAR_7->start.tv_sec+1)
   FUNC_3(0, VAR_0);
  VAR_7->count = 0;
 }
}
