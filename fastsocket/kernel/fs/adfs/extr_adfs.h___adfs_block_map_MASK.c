
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {unsigned int s_log2sharesize; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,unsigned int,unsigned int) ;

__attribute__((used)) static inline int
FUNC_2(struct super_block *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2)
{
 if (VAR_1 & 255) {
  unsigned int VAR_3;

  VAR_3 = (VAR_1 & 255) - 1;
  VAR_2 += VAR_3 << FUNC_0(VAR_0)->s_log2sharesize;
 }

 return FUNC_1(VAR_0, VAR_1 >> 8, VAR_2);
}
