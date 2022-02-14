
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_rgrpd {int dummy; } ;
struct gfs2_rbm {struct gfs2_rgrpd* rgd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gfs2_rbm*,int ) ;
 unsigned char FUNC_2 (struct gfs2_rbm*) ;

__attribute__((used)) static unsigned char FUNC_3(struct gfs2_rgrpd *VAR_0, u64 VAR_1)
{
 struct gfs2_rbm VAR_2 = { .rgd = VAR_0, };
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2, VAR_1);
 FUNC_0(VAR_3 != 0);

 return FUNC_2(&VAR_2);
}
