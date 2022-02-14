
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct mtd_info*,int ,void*,int *) ;
 int FUNC_1 (void*,int *,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1,
  void *VAR_2, u8 *VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;
 FUNC_1(VAR_2, VAR_3+13, VAR_4, VAR_5);
 FUNC_1(VAR_2+256, VAR_3+8, VAR_4, VAR_5);
 return 0;
}
