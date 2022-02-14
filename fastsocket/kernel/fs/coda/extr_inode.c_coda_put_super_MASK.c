
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int * s_fs_info; } ;
struct TYPE_2__ {int * vc_sb; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_0)
{
 FUNC_0(VAR_0)->vc_sb = ((void*)0);
 VAR_0->s_fs_info = ((void*)0);

 FUNC_1("Coda: Bye bye.\n");
}
