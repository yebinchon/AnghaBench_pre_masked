
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ thread; int stopped; int scan2; int mode; } ;
struct saa7134_dev {scalar_t__ automute; TYPE_2__ thread; int insuspend; TYPE_1__* input; } ;
struct TYPE_3__ {scalar_t__ amux; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct saa7134_dev*) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct saa7134_dev *VAR_2)
{
 if (VAR_2->input->amux != VAR_0) {
  FUNC_0("sound IF not in use, skipping scan\n");
  VAR_2->automute = 0;
  FUNC_1(VAR_2);
 } else if (VAR_2->thread.thread) {
  VAR_2->thread.mode = VAR_1;
  VAR_2->thread.scan2++;

  if (!VAR_2->insuspend && !VAR_2->thread.stopped)
   FUNC_2(VAR_2->thread.thread);
 } else {
  VAR_2->automute = 0;
  FUNC_1(VAR_2);
 }
 return 0;
}
