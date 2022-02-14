
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_id; } ;
struct TYPE_3__ {int s_journal; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct super_block *VAR_0, int *VAR_1)
{
 if (!FUNC_1(FUNC_0(VAR_0)) || (*VAR_1)++ > 3)
  return 0;

 FUNC_2(1, "%s: retrying operation after ENOSPC\n", VAR_0->s_id);

 return FUNC_3(FUNC_0(VAR_0)->s_journal);
}
