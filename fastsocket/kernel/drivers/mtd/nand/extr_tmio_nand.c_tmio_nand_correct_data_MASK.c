
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 int FUNC_0 (unsigned char*,unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, unsigned char *VAR_1,
  unsigned char *VAR_2, unsigned char *VAR_3)
{
 int VAR_4, VAR_5;


 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, 256);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_5 = FUNC_0(VAR_1 + 256, VAR_2 + 3, VAR_3 + 3, 256);
 if (VAR_5 < 0)
  return VAR_5;
 return VAR_4 + VAR_5;
}
