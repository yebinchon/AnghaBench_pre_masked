
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {int b_committed_data; } ;
struct buffer_head {int b_data; } ;
typedef int ext3_grpblk_t ;


 struct journal_head* FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_4(ext3_grpblk_t VAR_0, struct buffer_head *VAR_1)
{
 int VAR_2;
 struct journal_head *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_0, VAR_1->b_data))
  return 0;

 FUNC_2(VAR_1);
 if (!VAR_3->b_committed_data)
  VAR_2 = 1;
 else
  VAR_2 = !FUNC_1(VAR_0, VAR_3->b_committed_data);
 FUNC_3(VAR_1);
 return VAR_2;
}
