
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_dirent {int de_rec_len; } ;
typedef int (* gfs2_dscan_t ) (struct gfs2_dirent*,struct qstr const*,void*) ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct gfs2_dirent* FUNC_1 (int) ;
 int FUNC_2 (struct inode*) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct gfs2_dirent*,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static struct gfs2_dirent *FUNC_7(struct inode *VAR_1, void *VAR_2,
         unsigned int VAR_3, gfs2_dscan_t VAR_4,
         const struct qstr *VAR_5,
         void *VAR_6)
{
 struct gfs2_dirent *VAR_7, *VAR_8;
 unsigned VAR_9;
 unsigned VAR_10;
 int VAR_11 = 0;

 VAR_11 = FUNC_6(VAR_2);
 if (VAR_11 < 0)
  goto consist_inode;

 VAR_9 = VAR_11;
 VAR_8 = ((void*)0);
 VAR_7 = VAR_2 + VAR_9;
 VAR_10 = FUNC_3(VAR_7->de_rec_len);
 if (FUNC_4(VAR_7, VAR_9, VAR_10, VAR_3, 1))
  goto consist_inode;
 do {
  VAR_11 = VAR_4(VAR_7, VAR_5, VAR_6);
  if (VAR_11)
   break;
  VAR_9 += VAR_10;
  if (VAR_9 == VAR_3)
   break;
  VAR_8 = VAR_7;
  VAR_7 = VAR_2 + VAR_9;
  VAR_10 = FUNC_3(VAR_7->de_rec_len);
  if (FUNC_4(VAR_7, VAR_9, VAR_10, VAR_3, 0))
   goto consist_inode;
 } while(1);

 switch(VAR_11) {
 case 0:
  return ((void*)0);
 case 1:
  return VAR_7;
 case 2:
  return VAR_8 ? VAR_8 : VAR_7;
 default:
  FUNC_0(VAR_11 > 0);
  return FUNC_1(VAR_11);
 }

consist_inode:
 FUNC_5(FUNC_2(VAR_1));
 return FUNC_1(-VAR_0);
}
