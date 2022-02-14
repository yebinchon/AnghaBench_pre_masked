
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct idt77252_dev {int* tst; int tst_size; int cmd_lock; int name; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,unsigned long,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct idt77252_dev*) ;
 int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static void
FUNC_5(struct idt77252_dev *VAR_4, unsigned long VAR_5, u32 VAR_6)
{
 unsigned long VAR_7;

 if ((VAR_3 == 0) &&
     (((VAR_5 > VAR_4->tst[0] + VAR_4->tst_size - 2) &&
       (VAR_5 < VAR_4->tst[0] + VAR_4->tst_size)) ||
      ((VAR_5 > VAR_4->tst[1] + VAR_4->tst_size - 2) &&
       (VAR_5 < VAR_4->tst[1] + VAR_4->tst_size)))) {
  FUNC_0("%s: ERROR: TST JMP section at %08lx written: %08x\n",
         VAR_4->name, VAR_5, VAR_6);
 }

 FUNC_1(&VAR_4->cmd_lock, VAR_7);
 FUNC_4(VAR_6, VAR_2);
 FUNC_4(VAR_0 | (VAR_5 << 2), VAR_1);
 FUNC_3(VAR_4);
 FUNC_2(&VAR_4->cmd_lock, VAR_7);
}
