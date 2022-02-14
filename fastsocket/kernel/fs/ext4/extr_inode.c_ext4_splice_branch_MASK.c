
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_3__ {int key; scalar_t__ bh; int * p; } ;
typedef TYPE_1__ Indirect ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct inode*,int ,int,int ) ;
 int FUNC_3 (int *,struct inode*,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(handle_t *VAR_0, struct inode *VAR_1,
         ext4_lblk_t VAR_2, Indirect *VAR_3, int VAR_4,
         int VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 ext4_fsblk_t VAR_8;






 if (VAR_3->bh) {
  FUNC_0(VAR_3->bh, "get_write_access");
  VAR_7 = FUNC_5(VAR_0, VAR_3->bh);
  if (VAR_7)
   goto err_out;
 }


 *VAR_3->p = VAR_3->key;





 if (VAR_4 == 0 && VAR_5 > 1) {
  VAR_8 = FUNC_8(VAR_3->key) + 1;
  for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++)
   *(VAR_3->p + VAR_6) = FUNC_1(VAR_8++);
 }



 if (VAR_3->bh) {
  FUNC_7(5, "splicing indirect only\n");
  FUNC_0(VAR_3->bh, "call ext4_handle_dirty_metadata");
  VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_3->bh);
  if (VAR_7)
   goto err_out;
 } else {



  FUNC_6(VAR_0, VAR_1);
  FUNC_7(5, "splicing direct\n");
 }
 return VAR_7;

err_out:
 for (VAR_6 = 1; VAR_6 <= VAR_4; VAR_6++) {
  FUNC_0(VAR_3[VAR_6].bh, "call jbd2_journal_forget");
  FUNC_4(VAR_0, VAR_3[VAR_6].bh);
  FUNC_2(VAR_0, VAR_1,
     FUNC_8(VAR_3[VAR_6-1].key), 1, 0);
 }
 FUNC_2(VAR_0, VAR_1, FUNC_8(VAR_3[VAR_4].key), VAR_5, 0);

 return VAR_7;
}
