
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ const FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, const u_char *VAR_2,
    int VAR_3)
{
 int VAR_4;

 for (VAR_4=0; VAR_4<VAR_3; VAR_4++)
  if (VAR_2[VAR_4] != FUNC_0(VAR_1))
   return -VAR_0;

 return 0;
}
