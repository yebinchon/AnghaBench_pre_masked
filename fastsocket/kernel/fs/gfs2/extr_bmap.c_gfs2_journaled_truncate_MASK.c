
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct gfs2_sbd {TYPE_1__* sd_vfs; } ;
struct TYPE_2__ {scalar_t__ s_blocksize; } ;


 scalar_t__ VAR_0 ;
 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct gfs2_sbd*,int ,scalar_t__) ;
 int FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, u64 VAR_3, u64 VAR_4)
{
 struct gfs2_sbd *VAR_5 = FUNC_0(VAR_2);
 u64 VAR_6 = VAR_0 * VAR_5->sd_vfs->s_blocksize;
 u64 VAR_7;
 int VAR_8;

 while (VAR_3 != VAR_4) {
  VAR_7 = VAR_3 - VAR_4;
  if (VAR_7 > VAR_6)
   VAR_7 = VAR_6;
  FUNC_3(VAR_2, VAR_3, VAR_3 - VAR_7);
  VAR_3 -= VAR_7;
  FUNC_2(VAR_5);
  VAR_8 = FUNC_1(VAR_5, VAR_1, VAR_0);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
