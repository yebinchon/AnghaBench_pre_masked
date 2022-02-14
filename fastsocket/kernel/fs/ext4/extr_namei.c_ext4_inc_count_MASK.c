
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; int i_sb; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static void FUNC_3(handle_t *VAR_2, struct inode *VAR_3)
{
 FUNC_1(VAR_3);
 if (FUNC_2(VAR_3) && VAR_3->i_nlink > 1) {

  if (VAR_3->i_nlink >= VAR_1 || VAR_3->i_nlink == 2) {
   VAR_3->i_nlink = 1;
   FUNC_0(VAR_3->i_sb,
           VAR_0);
  }
 }
}
