
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atyfb_par {scalar_t__ blitter_may_be_busy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct atyfb_par*) ;
 int FUNC_1 (int,struct atyfb_par*) ;

__attribute__((used)) static inline void FUNC_2(struct atyfb_par *VAR_1)
{
 FUNC_1(16, VAR_1);
 while ((FUNC_0(VAR_0, VAR_1) & 1) != 0);
 VAR_1->blitter_may_be_busy = 0;
}
