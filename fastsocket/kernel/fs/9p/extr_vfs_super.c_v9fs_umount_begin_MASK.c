
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct super_block {struct v9fs_session_info* s_fs_info; } ;


 int FUNC_0 (struct v9fs_session_info*) ;

__attribute__((used)) static void
FUNC_1(struct super_block *VAR_0)
{
 struct v9fs_session_info *VAR_1;

 VAR_1 = VAR_0->s_fs_info;
 FUNC_0(VAR_1);
}
