
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_data; } ;
struct TYPE_2__ {int fd; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0)
{
 FUNC_3(&VAR_0->i_data, 0);
 if (FUNC_0(VAR_0)->fd != -1) {
  FUNC_2(&FUNC_0(VAR_0)->fd);
  FUNC_0(VAR_0)->fd = -1;
 }
 FUNC_1(VAR_0);
}
