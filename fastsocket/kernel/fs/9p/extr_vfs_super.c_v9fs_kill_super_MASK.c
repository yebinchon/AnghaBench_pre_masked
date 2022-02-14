
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct super_block {struct v9fs_session_info* s_fs_info; int s_root; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct v9fs_session_info*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct v9fs_session_info*) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_1)
{
 struct v9fs_session_info *VAR_2 = VAR_1->s_fs_info;

 FUNC_0(VAR_0, " %p\n", VAR_1);

 FUNC_3(VAR_1->s_root);

 FUNC_2(VAR_1);

 FUNC_4(VAR_2);
 FUNC_1(VAR_2);
 VAR_1->s_fs_info = ((void*)0);
 FUNC_0(VAR_0, "exiting kill_super\n");
}
