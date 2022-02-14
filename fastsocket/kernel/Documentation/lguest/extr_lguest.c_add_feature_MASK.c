
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {unsigned int feature_len; TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int feature_len; scalar_t__ config_len; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1, unsigned VAR_2)
{
 u8 *VAR_3 = FUNC_1(VAR_1);


 if (VAR_1->desc->feature_len <= VAR_2 / VAR_0) {
  FUNC_0(VAR_1->desc->config_len == 0);
  VAR_1->feature_len = VAR_1->desc->feature_len = (VAR_2/VAR_0) + 1;
 }

 VAR_3[VAR_2 / VAR_0] |= (1 << (VAR_2 % VAR_0));
}
