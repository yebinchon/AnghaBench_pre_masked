
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {struct file_lock* fl_next; int fl_nspid; int fl_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct file_lock **VAR_2, struct file_lock *VAR_3)
{
 FUNC_1(&VAR_3->fl_link, &VAR_1);

 VAR_3->fl_nspid = FUNC_0(FUNC_2(VAR_0));


 VAR_3->fl_next = *VAR_2;
 *VAR_2 = VAR_3;
}
