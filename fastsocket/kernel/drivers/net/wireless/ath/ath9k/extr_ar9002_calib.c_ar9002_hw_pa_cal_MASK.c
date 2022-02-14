
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int skipcount; } ;
struct ath_hw {TYPE_1__ pacal_info; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (struct ath_hw*,int) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_0, bool VAR_1)
{
 if (FUNC_0(VAR_0)) {
  if (VAR_1 || !VAR_0->pacal_info.skipcount)
   FUNC_2(VAR_0, VAR_1);
  else
   VAR_0->pacal_info.skipcount--;
 } else if (FUNC_1(VAR_0)) {
  if (VAR_1 || !VAR_0->pacal_info.skipcount)
   FUNC_3(VAR_0, VAR_1);
  else
   VAR_0->pacal_info.skipcount--;
 }
}
