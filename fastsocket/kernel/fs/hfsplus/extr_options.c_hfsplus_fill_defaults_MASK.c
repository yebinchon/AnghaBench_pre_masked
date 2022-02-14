
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsplus_sb_info {int part; int session; int gid; int uid; int umask; void* type; void* creator; } ;


 void* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct hfsplus_sb_info *VAR_1)
{
 if (!VAR_1)
  return;

 VAR_1->creator = VAR_0;
 VAR_1->type = VAR_0;
 VAR_1->umask = FUNC_2();
 VAR_1->uid = FUNC_1();
 VAR_1->gid = FUNC_0();
 VAR_1->part = -1;
 VAR_1->session = -1;
}
