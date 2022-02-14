
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {scalar_t__ b_committed_data; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext3_grpblk_t ;


 struct journal_head* FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (int,struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static ext3_grpblk_t
FUNC_5(ext3_grpblk_t VAR_0, struct buffer_head *VAR_1,
     ext3_grpblk_t VAR_2)
{
 ext3_grpblk_t VAR_3;
 struct journal_head *VAR_4 = FUNC_0(VAR_1);

 while (VAR_0 < VAR_2) {
  VAR_3 = FUNC_1(VAR_1->b_data, VAR_2, VAR_0);
  if (VAR_3 >= VAR_2)
   return -1;
  if (FUNC_2(VAR_3, VAR_1))
   return VAR_3;
  FUNC_3(VAR_1);
  if (VAR_4->b_committed_data)
   VAR_0 = FUNC_1(VAR_4->b_committed_data,
       VAR_2, VAR_3);
  FUNC_4(VAR_1);
 }
 return -1;
}
