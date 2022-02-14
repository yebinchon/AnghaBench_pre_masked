
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int indirect_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u32
FUNC_4(struct bnx2 *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 FUNC_2(&VAR_2->indirect_lock);
 FUNC_1(VAR_2, VAR_1, VAR_3);
 VAR_4 = FUNC_0(VAR_2, VAR_0);
 FUNC_3(&VAR_2->indirect_lock);
 return VAR_4;
}
