
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nes_adapter {int resource_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static inline int FUNC_4(struct nes_adapter *VAR_1,
  unsigned long *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_1->resource_lock, VAR_4);

 VAR_5 = FUNC_3(VAR_3, VAR_2);
 FUNC_0(VAR_0, "resource_num %u is%s allocated.\n",
   VAR_3, (VAR_5 ? "": " not"));
 FUNC_2(&VAR_1->resource_lock, VAR_4);

 return VAR_5;
}
