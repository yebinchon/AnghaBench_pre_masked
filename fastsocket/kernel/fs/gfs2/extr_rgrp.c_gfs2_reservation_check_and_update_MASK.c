
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct gfs2_rbm {int rgd; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_extent {scalar_t__ len; struct gfs2_rbm rbm; } ;


 scalar_t__ FUNC_0 (struct gfs2_rbm*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__,struct gfs2_inode const*) ;
 int FUNC_2 (struct gfs2_rbm*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct gfs2_rbm*) ;

__attribute__((used)) static int FUNC_4(struct gfs2_rbm *VAR_0,
          const struct gfs2_inode *VAR_1,
          u32 VAR_2,
          struct gfs2_extent *VAR_3)
{
 u64 VAR_4 = FUNC_3(VAR_0);
 u32 VAR_5 = 1;
 u64 VAR_6;
 int VAR_7;





 if (VAR_2) {
  VAR_5 = FUNC_0(VAR_0, VAR_2);
  if (VAR_5 <= VAR_3->len)
   goto fail;
 }





 VAR_6 = FUNC_1(VAR_0->rgd, VAR_4, VAR_5, VAR_1);
 if (VAR_6 == VAR_4) {
  if (!VAR_2 || VAR_5 >= VAR_2)
   return 0;

  if (VAR_5 > VAR_3->len) {
   VAR_3->len = VAR_5;
   VAR_3->rbm = *VAR_0;
  }
fail:
  VAR_6 = VAR_4 + VAR_5;
 }
 VAR_7 = FUNC_2(VAR_0, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 return 1;
}
