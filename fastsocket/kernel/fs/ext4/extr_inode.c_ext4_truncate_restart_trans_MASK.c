
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int i_data_sem; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int * FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,char*,int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(handle_t *VAR_0, struct inode *VAR_1,
     int VAR_2)
{
 int VAR_3;







 FUNC_0(FUNC_2(VAR_1) == ((void*)0));
 FUNC_7(2, "restarting handle %p\n", VAR_0);
 FUNC_8(&FUNC_1(VAR_1)->i_data_sem);
 VAR_3 = FUNC_6(VAR_0, FUNC_3(VAR_1));
 FUNC_4(&FUNC_1(VAR_1)->i_data_sem);
 FUNC_5(VAR_1);

 return VAR_3;
}
