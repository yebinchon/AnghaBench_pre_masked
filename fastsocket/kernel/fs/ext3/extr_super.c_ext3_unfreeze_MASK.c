
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct TYPE_2__ {int s_journal; int s_es; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct super_block*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_2)
{
 if (!(VAR_2->s_flags & VAR_1)) {
  FUNC_4(VAR_2);

  FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2, FUNC_0(VAR_2)->s_es, 1);
  FUNC_5(VAR_2);
  FUNC_3(FUNC_0(VAR_2)->s_journal);
 }
 return 0;
}
