
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct inode*,int ,int,int ) ;
 int FUNC_1 (int *,struct inode*) ;
 int FUNC_2 (int *,struct inode*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(handle_t *VAR_2,
    struct inode *VAR_3, __le32 VAR_4)
{
 int VAR_5, VAR_6 = 0;
 __le32 *VAR_7;
 struct buffer_head *VAR_8;
 unsigned long VAR_9 = VAR_3->i_sb->s_blocksize >> 2;

 VAR_8 = FUNC_5(VAR_3->i_sb, FUNC_3(VAR_4));
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = (__le32 *)VAR_8->b_data;
 for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
  if (VAR_7[VAR_5]) {
   VAR_6 = FUNC_2(VAR_2,
     VAR_3, VAR_7[VAR_5]);
   if (VAR_6) {
    FUNC_4(VAR_8);
    return VAR_6;
   }
  }
 }
 FUNC_4(VAR_8);
 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_2, VAR_3, FUNC_3(VAR_4), 1,
    VAR_1);
 return 0;
}
