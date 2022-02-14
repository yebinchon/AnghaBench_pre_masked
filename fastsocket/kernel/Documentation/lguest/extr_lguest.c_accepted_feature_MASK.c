
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int feature_len; } ;


 unsigned int VAR_0 ;
 int* FUNC_0 (struct device*) ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_1, unsigned int VAR_2)
{
 const u8 *VAR_3 = FUNC_0(VAR_1) + VAR_1->feature_len;

 if (VAR_1->feature_len < VAR_2 / VAR_0)
  return 0;
 return VAR_3[VAR_2 / VAR_0] & (1 << (VAR_2 % VAR_0));
}
