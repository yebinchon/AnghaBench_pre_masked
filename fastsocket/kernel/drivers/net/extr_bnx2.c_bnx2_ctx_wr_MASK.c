
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int indirect_lock; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2*,int ) ;
 int FUNC_2 (struct bnx2*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct bnx2 *VAR_6, u32 VAR_7, u32 VAR_8, u32 VAR_9)
{
 VAR_8 += VAR_7;
 FUNC_3(&VAR_6->indirect_lock);
 if (FUNC_0(VAR_6) == VAR_0) {
  int VAR_10;

  FUNC_2(VAR_6, VAR_3, VAR_9);
  FUNC_2(VAR_6, VAR_1,
   VAR_8 | VAR_2);
  for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
   VAR_9 = FUNC_1(VAR_6, VAR_1);
   if ((VAR_9 & VAR_2) == 0)
    break;
   FUNC_5(5);
  }
 } else {
  FUNC_2(VAR_6, VAR_5, VAR_8);
  FUNC_2(VAR_6, VAR_4, VAR_9);
 }
 FUNC_4(&VAR_6->indirect_lock);
}
