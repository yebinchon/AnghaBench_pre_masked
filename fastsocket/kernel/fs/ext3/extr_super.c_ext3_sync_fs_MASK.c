
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct super_block {int dummy; } ;
struct TYPE_2__ {int s_journal; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0, int VAR_1)
{
 tid_t VAR_2;

 FUNC_3(VAR_0, VAR_1);
 if (FUNC_1(FUNC_0(VAR_0)->s_journal, &VAR_2)) {
  if (VAR_1)
   FUNC_2(FUNC_0(VAR_0)->s_journal, VAR_2);
 }
 return 0;
}
