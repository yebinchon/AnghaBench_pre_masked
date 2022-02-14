
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int ** bfad_dentry_files; } ;
struct bfad_port_s {int * port_debugfs_root; struct bfad_s* bfad; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

inline void
FUNC_4(struct bfad_port_s *VAR_3)
{
 struct bfad_s *VAR_4 = VAR_3->bfad;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (VAR_4->bfad_dentry_files[VAR_5]) {
   FUNC_3(VAR_4->bfad_dentry_files[VAR_5]);
   VAR_4->bfad_dentry_files[VAR_5] = ((void*)0);
  }
 }


 if (VAR_3->port_debugfs_root) {
  FUNC_3(VAR_3->port_debugfs_root);
  VAR_3->port_debugfs_root = ((void*)0);
  FUNC_1(&VAR_0);
 }


 if (FUNC_2(&VAR_0) == 0) {
  FUNC_3(VAR_1);
  VAR_1 = ((void*)0);
 }
}
