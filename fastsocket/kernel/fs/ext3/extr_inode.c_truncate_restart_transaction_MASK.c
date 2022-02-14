
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int truncate_mutex; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(handle_t *VAR_0, struct inode *VAR_1)
{
 int VAR_2;

 FUNC_3(2, "restarting handle %p\n", VAR_0);






 FUNC_5(&FUNC_0(VAR_1)->truncate_mutex);
 VAR_2 = FUNC_2(VAR_0, FUNC_1(VAR_1));
 FUNC_4(&FUNC_0(VAR_1)->truncate_mutex);
 return VAR_2;
}
