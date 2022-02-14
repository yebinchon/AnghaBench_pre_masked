
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {scalar_t__ b_committed_data; } ;
struct buffer_head {int b_data; } ;
typedef int spinlock_t ;
typedef int ext3_grpblk_t ;


 struct journal_head* FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;

__attribute__((used)) static inline int
FUNC_6(spinlock_t *VAR_0, ext3_grpblk_t VAR_1, struct buffer_head *VAR_2)
{
 struct journal_head *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 if (FUNC_2(VAR_0, VAR_1, VAR_2->b_data))
  return 0;
 FUNC_4(VAR_2);
 if (VAR_3->b_committed_data && FUNC_3(VAR_1,VAR_3->b_committed_data)) {
  FUNC_1(VAR_0, VAR_1, VAR_2->b_data);
  VAR_4 = 0;
 } else {
  VAR_4 = 1;
 }
 FUNC_5(VAR_2);
 return VAR_4;
}
