
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_dirt; } ;
typedef int handle_t ;
struct TYPE_2__ {int s_sbh; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(handle_t *VAR_1,
       struct super_block *VAR_2)
{
 if (FUNC_0(VAR_2, VAR_0))
  return;

 if (FUNC_4(VAR_1, FUNC_1(VAR_2)->s_sbh) == 0) {
  FUNC_2(VAR_2, VAR_0);
  VAR_2->s_dirt = 1;
  FUNC_3(VAR_1, ((void*)0), FUNC_1(VAR_2)->s_sbh);
 }
}
