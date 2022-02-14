
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct gfs2_inode {int i_gl; } ;
struct TYPE_2__ {scalar_t__ no_formal_ino; scalar_t__ no_addr; } ;
struct gfs2_dirent {int de_rec_len; TYPE_1__ de_inum; } ;
struct buffer_head {char* b_data; int b_size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gfs2_inode*) ;
 scalar_t__ FUNC_3 (struct gfs2_dirent*) ;
 int FUNC_4 (int ,struct buffer_head*) ;

__attribute__((used)) static void FUNC_5(struct gfs2_inode *VAR_0, struct buffer_head *VAR_1,
         struct gfs2_dirent *VAR_2, struct gfs2_dirent *VAR_3)
{
 u16 VAR_4, VAR_5;

 if (FUNC_3(VAR_3)) {
  FUNC_2(VAR_0);
  return;
 }

 FUNC_4(VAR_0->i_gl, VAR_1);





 if (!VAR_2) {
  VAR_3->de_inum.no_addr = 0;
  VAR_3->de_inum.no_formal_ino = 0;
  return;
 }



 VAR_5 = FUNC_0(VAR_2->de_rec_len);
 VAR_4 = FUNC_0(VAR_3->de_rec_len);

 if ((char *)VAR_2 + VAR_5 != (char *)VAR_3)
  FUNC_2(VAR_0);
 if ((char *)VAR_3 + VAR_4 > VAR_1->b_data + VAR_1->b_size)
  FUNC_2(VAR_0);

 VAR_5 += VAR_4;
 VAR_2->de_rec_len = FUNC_1(VAR_5);
}
