
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct mtd_info*,int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1)
{
 u8 VAR_2[16];
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;


 return FUNC_1(VAR_2[5]) >= 7 ? 0 : 1;
}
