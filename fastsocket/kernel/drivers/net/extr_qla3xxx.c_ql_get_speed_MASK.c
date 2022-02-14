
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql3_adapter {int mac_index; int hw_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql3_adapter*) ;
 scalar_t__ FUNC_1 (struct ql3_adapter*,int ,int) ;
 int FUNC_2 (struct ql3_adapter*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_5(struct ql3_adapter *VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;
 FUNC_3(&VAR_2->hw_lock, VAR_4);
 if(FUNC_1(VAR_2, VAR_0,
  (VAR_1 | (VAR_2->mac_index) *
    2) << 7)) {
  FUNC_4(&VAR_2->hw_lock, VAR_4);
  return 0;
 }
 VAR_3 = FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_0);
 FUNC_4(&VAR_2->hw_lock, VAR_4);
 return VAR_3;
}
