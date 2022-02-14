
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int unpoint; scalar_t__ point; struct map_info* priv; } ;
struct map_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct map_info*) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_2, void *VAR_3)
{
 struct map_info *VAR_4 = VAR_2->priv;
 if (!VAR_2->point && FUNC_0(VAR_4)) {
  VAR_2->point = VAR_0;
  VAR_2->unpoint = VAR_1;
 }
}
