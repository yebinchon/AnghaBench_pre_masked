
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; int b_size; } ;
typedef void* block_t ;
struct TYPE_3__ {void* key; struct buffer_head* bh; void** p; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*,struct inode*) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*) ;
 struct buffer_head* FUNC_8 (int ,int) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_1,
        int VAR_2,
        int *VAR_3,
        Indirect *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7 = FUNC_7(VAR_1);

 VAR_4[0].key = FUNC_2(VAR_7);
 if (VAR_7) for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++) {
  struct buffer_head *VAR_8;

  int VAR_9 = FUNC_7(VAR_1);
  if (!VAR_9)
   break;
  VAR_4[VAR_5].key = FUNC_2(VAR_9);
  VAR_8 = FUNC_8(VAR_1->i_sb, VAR_7);
  FUNC_3(VAR_8);
  FUNC_5(VAR_8->b_data, 0, VAR_8->b_size);
  VAR_4[VAR_5].bh = VAR_8;
  VAR_4[VAR_5].p = (block_t*) VAR_8->b_data + VAR_3[VAR_5];
  *VAR_4[VAR_5].p = VAR_4[VAR_5].key;
  FUNC_9(VAR_8);
  FUNC_10(VAR_8);
  FUNC_4(VAR_8, VAR_1);
  VAR_7 = VAR_9;
 }
 if (VAR_5 == VAR_2)
  return 0;


 for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++)
  FUNC_0(VAR_4[VAR_6].bh);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_6(VAR_1, FUNC_1(VAR_4[VAR_6].key));
 return -VAR_0;
}
