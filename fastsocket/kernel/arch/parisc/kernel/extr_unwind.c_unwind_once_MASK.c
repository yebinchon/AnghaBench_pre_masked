
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unwind_frame_info {scalar_t__ prev_sp; scalar_t__ prev_ip; scalar_t__ sp; scalar_t__ ip; TYPE_1__* t; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int FUNC_0 (char*,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct unwind_frame_info*) ;

int FUNC_2(struct unwind_frame_info *VAR_0)
{
 FUNC_1(VAR_0);

 if (VAR_0->prev_sp == 0 ||
     VAR_0->prev_ip == 0)
  return -1;

 VAR_0->sp = VAR_0->prev_sp;
 VAR_0->ip = VAR_0->prev_ip;
 VAR_0->prev_sp = 0;
 VAR_0->prev_ip = 0;

 FUNC_0("(%d) Continue unwind to sp=%08lx ip=%08lx\n",
     VAR_0->t ? (int)VAR_0->t->pid : -1,
     VAR_0->sp, VAR_0->ip);

 return 0;
}
