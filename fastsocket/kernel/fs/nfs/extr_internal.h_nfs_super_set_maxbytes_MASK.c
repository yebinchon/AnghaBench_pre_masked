
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_maxbytes; } ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ __u64 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline
void FUNC_0(struct super_block *VAR_1, __u64 VAR_2)
{
 VAR_1->s_maxbytes = (loff_t)VAR_2;
 if (VAR_1->s_maxbytes > VAR_0 || VAR_1->s_maxbytes <= 0)
  VAR_1->s_maxbytes = VAR_0;
}
