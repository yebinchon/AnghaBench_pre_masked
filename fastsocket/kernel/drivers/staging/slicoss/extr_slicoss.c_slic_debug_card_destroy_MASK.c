
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sliccard {int card_size; int * debugfs_dir; int * debugfs_cardinfo; struct adapter** adapter; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct adapter*) ;

__attribute__((used)) static void FUNC_2(struct sliccard *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->card_size; VAR_1++) {
  struct adapter *VAR_2;

  VAR_2 = VAR_0->adapter[VAR_1];
  if (VAR_2)
   FUNC_1(VAR_2);
 }
 if (VAR_0->debugfs_cardinfo) {
  FUNC_0(VAR_0->debugfs_cardinfo);
  VAR_0->debugfs_cardinfo = ((void*)0);
 }
 if (VAR_0->debugfs_dir) {
  FUNC_0(VAR_0->debugfs_dir);
  VAR_0->debugfs_dir = ((void*)0);
 }
}
