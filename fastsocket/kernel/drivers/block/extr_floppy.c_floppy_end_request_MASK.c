
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {TYPE_1__* rq_disk; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;


 scalar_t__ FUNC_0 (struct request*,int,unsigned int) ;
 unsigned int FUNC_1 (struct request*) ;
 unsigned int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct request *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_0;
 unsigned int VAR_5 = (unsigned long)VAR_2->rq_disk->private_data;


 if (VAR_3)
  VAR_4 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_2, VAR_3, VAR_4 << 9))
  return;


 FUNC_2(VAR_5);
 VAR_1 = ((void*)0);
}
