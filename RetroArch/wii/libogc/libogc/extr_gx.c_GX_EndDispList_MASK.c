
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ gxFifoUnlinked; scalar_t__ saveDLctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int ) ;

u32 FUNC_7()
{
 u32 VAR_6;
 u8 VAR_7 = 0;

 FUNC_0(&VAR_3);
 FUNC_3(&VAR_4);

 if(VAR_1->saveDLctx) {
  FUNC_4(VAR_6);
  FUNC_6(VAR_2,VAR_5,VAR_0);
  FUNC_5(VAR_6);
 }

 VAR_1->gxFifoUnlinked = 0;

 VAR_7 = FUNC_2(&VAR_3);
 if(VAR_7) return 0;

 return FUNC_1(&VAR_3);
}
