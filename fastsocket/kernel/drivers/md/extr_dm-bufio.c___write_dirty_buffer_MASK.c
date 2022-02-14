
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dm_buffer {int write_list; int block; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct dm_buffer*,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct dm_buffer *VAR_6,
     struct list_head *VAR_7)
{
 if (!FUNC_3(VAR_0, &VAR_6->state))
  return;

 FUNC_0(VAR_0, &VAR_6->state);
 FUNC_4(&VAR_6->state, VAR_1,
    VAR_4, VAR_2);

 if (!VAR_7)
  FUNC_2(VAR_6, VAR_3, VAR_6->block, VAR_5);
 else
  FUNC_1(&VAR_6->write_list, VAR_7);
}
