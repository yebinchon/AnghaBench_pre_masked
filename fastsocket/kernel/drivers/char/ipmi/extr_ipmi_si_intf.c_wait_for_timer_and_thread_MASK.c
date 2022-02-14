
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int si_timer; int * thread; scalar_t__ intf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct smi_info *VAR_0)
{
 if (VAR_0->intf) {




  if (VAR_0->thread != ((void*)0))
   FUNC_1(VAR_0->thread);
  FUNC_0(&VAR_0->si_timer);
 }
}
