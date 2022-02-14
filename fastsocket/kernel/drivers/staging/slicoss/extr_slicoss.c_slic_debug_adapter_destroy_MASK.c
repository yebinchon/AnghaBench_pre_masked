
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int * debugfs_entry; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0)
{
 if (VAR_0->debugfs_entry) {
  FUNC_0(VAR_0->debugfs_entry);
  VAR_0->debugfs_entry = ((void*)0);
 }
}
