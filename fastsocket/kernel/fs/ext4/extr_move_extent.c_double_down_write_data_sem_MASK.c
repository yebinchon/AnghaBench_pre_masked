
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; } ;
struct TYPE_2__ {int i_data_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct inode *VAR_1, struct inode *VAR_2)
{
 struct inode *VAR_3 = VAR_1, *VAR_4 = VAR_2;






 if (VAR_2->i_ino < VAR_1->i_ino) {
  VAR_3 = VAR_2;
  VAR_4 = VAR_1;
 }

 FUNC_1(&FUNC_0(VAR_3)->i_data_sem);
 FUNC_2(&FUNC_0(VAR_4)->i_data_sem, VAR_0);
}
