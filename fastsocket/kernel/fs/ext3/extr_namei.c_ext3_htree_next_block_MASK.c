
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dx_node {scalar_t__ entries; } ;
struct dx_frame {scalar_t__ at; scalar_t__ entries; struct buffer_head* bh; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __u32 ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct buffer_head* FUNC_4 (int *,struct inode*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, __u32 VAR_1,
     struct dx_frame *VAR_2,
     struct dx_frame *VAR_3,
     __u32 *VAR_4)
{
 struct dx_frame *VAR_5;
 struct buffer_head *VAR_6;
 int VAR_7, VAR_8 = 0;
 __u32 VAR_9;

 VAR_5 = VAR_2;







 while (1) {
  if (++(VAR_5->at) < VAR_5->entries + FUNC_2(VAR_5->entries))
   break;
  if (VAR_5 == VAR_3)
   return 0;
  VAR_8++;
  VAR_5--;
 }
 VAR_9 = FUNC_3(VAR_5->at);
 if (VAR_4)
  *VAR_4 = VAR_9;
 if ((VAR_1 & 1) == 0) {
  if ((VAR_9 & ~1) != VAR_1)
   return 0;
 }




 while (VAR_8--) {
  if (!(VAR_6 = FUNC_4(((void*)0), VAR_0, FUNC_1(VAR_5->at),
          0, &VAR_7)))
   return VAR_7;
  VAR_5++;
  FUNC_0 (VAR_5->bh);
  VAR_5->bh = VAR_6;
  VAR_5->at = VAR_5->entries = ((struct dx_node *) VAR_6->b_data)->entries;
 }
 return 1;
}
