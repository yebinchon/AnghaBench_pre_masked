
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
typedef int journal_t ;
struct TYPE_2__ {int s_es; int * s_journal; } ;


 int FUNC_0 (struct super_block*,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_2 (struct super_block*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_2)
{
 int VAR_3 = 0;
 journal_t *VAR_4;

 if (!(VAR_2->s_flags & VAR_1)) {
  VAR_4 = FUNC_1(VAR_2)->s_journal;


  FUNC_4(VAR_4);





  VAR_3 = FUNC_3(VAR_4);
  if (VAR_3 < 0)
   goto out;


  FUNC_0(VAR_2, VAR_0);
  VAR_3 = FUNC_2(VAR_2, FUNC_1(VAR_2)->s_es, 1);
  if (VAR_3)
   goto out;
 }
 return 0;

out:
 FUNC_5(VAR_4);
 return VAR_3;
}
