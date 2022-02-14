
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u132_ring {int scheduler; } ;
struct u132 {int kref; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct u132 *VAR_2, struct u132_ring *VAR_3,
 unsigned int VAR_4)
{
 if (VAR_4 > 0) {
  if (FUNC_1(VAR_1, &VAR_3->scheduler, VAR_4))
   return;
 } else if (FUNC_1(VAR_1, &VAR_3->scheduler, 0))
  return;
 FUNC_0(&VAR_2->kref, VAR_0);
 return;
}
