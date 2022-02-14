
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int debugfs_dir; int * debugfs_files; int debugfs_debug; int events_dir; int * debugfs_events_files; int regs_dir; int * debugfs_regs_files; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct lbs_private *VAR_3)
{
 int VAR_4;

 for(VAR_4=0; VAR_4<FUNC_0(VAR_2); VAR_4++)
  FUNC_1(VAR_3->debugfs_regs_files[VAR_4]);

 FUNC_1(VAR_3->regs_dir);

 for(VAR_4=0; VAR_4<FUNC_0(VAR_0); VAR_4++)
  FUNC_1(VAR_3->debugfs_events_files[VAR_4]);

 FUNC_1(VAR_3->events_dir);



 for(VAR_4=0; VAR_4<FUNC_0(VAR_1); VAR_4++)
  FUNC_1(VAR_3->debugfs_files[VAR_4]);
 FUNC_1(VAR_3->debugfs_dir);
}
