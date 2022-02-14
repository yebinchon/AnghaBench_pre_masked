
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gfs2_inode {int dummy; } ;
struct gfs2_dirent {int de_rec_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_inode*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_2,
          const struct gfs2_dirent *VAR_3, const void *VAR_4)
{
 const void *VAR_5 = VAR_3;
 u16 VAR_6 = FUNC_0(VAR_3->de_rec_len);

 if (FUNC_2(VAR_6 < sizeof(struct gfs2_dirent)))
  goto broken;
 VAR_5 += VAR_6;
 if (VAR_5 < VAR_4)
  return VAR_6;
 if (VAR_5 == VAR_4)
  return -VAR_1;
broken:
 FUNC_1(VAR_2);
 return -VAR_0;
}
