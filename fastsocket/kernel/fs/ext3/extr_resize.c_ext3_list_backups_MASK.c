
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,int ) ;

__attribute__((used)) static unsigned FUNC_1(struct super_block *VAR_1, unsigned *VAR_2,
      unsigned *VAR_3, unsigned *VAR_4)
{
 unsigned *VAR_5 = VAR_2;
 int VAR_6 = 3;
 unsigned VAR_7;

 if (!FUNC_0(VAR_1,
     VAR_0)) {
  VAR_7 = *VAR_5;
  *VAR_5 += 1;
  return VAR_7;
 }

 if (*VAR_3 < *VAR_5) {
  VAR_5 = VAR_3;
  VAR_6 = 5;
 }
 if (*VAR_4 < *VAR_5) {
  VAR_5 = VAR_4;
  VAR_6 = 7;
 }

 VAR_7 = *VAR_5;
 *VAR_5 *= VAR_6;

 return VAR_7;
}
