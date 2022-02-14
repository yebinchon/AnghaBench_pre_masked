
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct gfs2_holder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_rgrpd* FUNC_0 (struct gfs2_sbd*,int ,int) ;
 unsigned int FUNC_1 (struct gfs2_rgrpd*,int ) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;

int FUNC_4(struct gfs2_sbd *VAR_3, u64 VAR_4, unsigned int VAR_5)
{
 struct gfs2_rgrpd *VAR_6;
 struct gfs2_holder VAR_7;
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_0(VAR_3, VAR_4, 1);
 if (!VAR_6)
  goto fail;

 VAR_8 = FUNC_3(VAR_6->rd_gl, VAR_2, 0, &VAR_7);
 if (VAR_8)
  goto fail;

 if (FUNC_1(VAR_6, VAR_4) != VAR_5)
  VAR_8 = -VAR_1;

 FUNC_2(&VAR_7);
fail:
 return VAR_8;
}
