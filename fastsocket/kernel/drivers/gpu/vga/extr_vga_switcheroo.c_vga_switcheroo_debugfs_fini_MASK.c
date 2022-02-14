
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgasr_priv {int * debugfs_root; int * switch_file; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vgasr_priv *VAR_0)
{
 if (VAR_0->switch_file) {
  FUNC_0(VAR_0->switch_file);
  VAR_0->switch_file = ((void*)0);
 }
 if (VAR_0->debugfs_root) {
  FUNC_0(VAR_0->debugfs_root);
  VAR_0->debugfs_root = ((void*)0);
 }
}
