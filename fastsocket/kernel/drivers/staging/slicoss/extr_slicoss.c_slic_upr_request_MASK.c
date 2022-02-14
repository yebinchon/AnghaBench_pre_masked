
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; int lock; } ;
struct adapter {TYPE_1__ upr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_2,
       u32 VAR_3,
       u32 VAR_4,
       u32 VAR_5,
       u32 VAR_6, u32 VAR_7)
{
 int VAR_8;

 FUNC_2(&VAR_2->upr_lock.lock, VAR_2->upr_lock.flags);
 VAR_8 = FUNC_0(VAR_2,
     VAR_3,
     VAR_4,
     VAR_5, VAR_6, VAR_7);
 if (VAR_8 != VAR_1) {
  FUNC_3(&VAR_2->upr_lock.lock,
     VAR_2->upr_lock.flags);
  return VAR_8;
 }
 FUNC_1(VAR_2);
 FUNC_3(&VAR_2->upr_lock.lock,
    VAR_2->upr_lock.flags);
 return VAR_0;
}
