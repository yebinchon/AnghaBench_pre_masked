
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct inode {int i_state; } ;


 int FUNC_0 (int ,int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int * FUNC_2 (int*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_6)
{
 FUNC_0(VAR_5, &VAR_6->i_state, VAR_2);
 wait_queue_head_t *VAR_7;

 VAR_7 = FUNC_2(&VAR_6->i_state, VAR_2);
 do {
  FUNC_4(&VAR_3);
  FUNC_1(VAR_7, &VAR_5, VAR_4, VAR_1);
  FUNC_3(&VAR_3);
 } while (VAR_6->i_state & VAR_0);
}
