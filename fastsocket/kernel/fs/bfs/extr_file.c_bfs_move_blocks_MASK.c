
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long,struct super_block*) ;
 int FUNC_1 (char*,unsigned long,unsigned long,...) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;

 FUNC_1("%08lx-%08lx->%08lx\n", VAR_2, VAR_3, VAR_4);
 for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5++)
  if(FUNC_0(VAR_5, VAR_4 + VAR_5, VAR_1)) {
   FUNC_1("failed to move block %08lx -> %08lx\n", VAR_5,
        VAR_4 + VAR_5);
   return -VAR_0;
  }
 return 0;
}
