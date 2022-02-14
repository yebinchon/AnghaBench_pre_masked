
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; int work_lock; int fatal_error_handler_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adapter*,int,int,unsigned int*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*,int ,int ) ;

void FUNC_9(struct adapter *VAR_4)
{
 unsigned int VAR_5[4];

 if (VAR_4->flags & VAR_2) {
  FUNC_7(VAR_4);
  FUNC_8(VAR_4, VAR_1, 0);
  FUNC_8(VAR_4, VAR_0, 0);
  FUNC_8(VAR_4, FUNC_1(VAR_1, 1), 0);
  FUNC_8(VAR_4, FUNC_1(VAR_0, 1), 0);

  FUNC_3(&VAR_4->work_lock);
  FUNC_6(VAR_4);
  FUNC_2(VAR_3, &VAR_4->fatal_error_handler_task);
  FUNC_4(&VAR_4->work_lock);
 }
 FUNC_0(VAR_4, "encountered fatal error, operation suspended\n");
 if (!FUNC_5(VAR_4, 0xa0, 4, VAR_5))
  FUNC_0(VAR_4, "FW status: 0x%x, 0x%x, 0x%x, 0x%x\n",
    VAR_5[0], VAR_5[1],
    VAR_5[2], VAR_5[3]);
}
