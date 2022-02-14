
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hw_counters; } ;
struct ar9170 {int tally; TYPE_1__ fw; } ;


 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ar9170 *VAR_0, bool VAR_1, bool VAR_2)
{
 int VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_0->fw.hw_counters) {
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_1)
  FUNC_2(&VAR_0->tally, 0, sizeof(VAR_0->tally));

 return 0;
}
