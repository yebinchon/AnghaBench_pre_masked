
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; int s_dirt; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct super_block*) ;

__attribute__((used)) static void
FUNC_5(struct super_block *VAR_1)
{
 int VAR_2 = 2;

 FUNC_2(VAR_1);
 if (!(VAR_1->s_flags & VAR_0)) {



  FUNC_0(VAR_1, VAR_2);
  VAR_1->s_dirt = !VAR_2;
 } else
  VAR_1->s_dirt = 0;
 FUNC_4(VAR_1);

 FUNC_3("AFFS: write_super() at %lu, clean=%d\n", FUNC_1(), VAR_2);
}
