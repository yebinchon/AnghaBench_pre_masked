
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qib_devdata {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qib_devdata*,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_1(struct qib_devdata *VAR_3, u32 VAR_4)
{
 if (VAR_4) {
  if (VAR_3->flags & VAR_0)
   return;
  FUNC_0(VAR_3, VAR_2, ~0ULL);

  FUNC_0(VAR_3, VAR_1, 0ULL);
 } else
  FUNC_0(VAR_3, VAR_2, 0ULL);
}
