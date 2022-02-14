
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ thread; int stopped; } ;
struct saa7134_dev {TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,int) ;

int FUNC_2(struct saa7134_dev *VAR_1)
{

 if (VAR_1->thread.thread && !VAR_1->thread.stopped)
  FUNC_0(VAR_1->thread.thread);

 FUNC_1(VAR_0, 0x07, 0x00);
 return 0;
}
