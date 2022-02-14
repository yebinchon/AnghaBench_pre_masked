
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct _lck_dev {int dev; int (* unlockcb ) (size_t,int) ;int node; } ;
typedef size_t s32 ;
struct TYPE_4__ {int flags; int lckd_dev_bits; int lckd_dev; int lck_cnt; } ;
typedef TYPE_1__ exibus_priv ;
typedef int (* EXICallback ) (size_t,int) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

s32 FUNC_5(s32 VAR_3)
{
 u32 VAR_4,VAR_5;
 EXICallback VAR_6;
 struct _lck_dev *VAR_7;
 exibus_priv *VAR_8 = &VAR_2[VAR_3];
 FUNC_0(VAR_4);
 if(!(VAR_8->flags&VAR_0)) {
  FUNC_1(VAR_4);
  return 0;
 }

 VAR_8->flags &= ~VAR_0;
 FUNC_2(VAR_3,VAR_8);

 if(!VAR_8->lck_cnt) {
  FUNC_1(VAR_4);
  return 1;
 }

 VAR_8->lck_cnt--;
 VAR_7 = (struct _lck_dev*)FUNC_4(&VAR_8->lckd_dev);
 FUNC_3(&VAR_1,&VAR_7->node);

 VAR_6 = VAR_7->unlockcb;
 VAR_5 = VAR_7->dev;
 VAR_8->lckd_dev_bits &= ~(1<<VAR_5);
 if(VAR_6) VAR_6(VAR_3,VAR_5);

 FUNC_1(VAR_4);
 return 1;
}
