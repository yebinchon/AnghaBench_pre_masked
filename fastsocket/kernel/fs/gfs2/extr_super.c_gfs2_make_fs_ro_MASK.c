
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_flags; int sd_trans_gl; int sd_vfs; } ;
struct gfs2_holder {scalar_t__ gh_gl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_sbd*) ;
 int FUNC_5 (struct gfs2_sbd*) ;
 int FUNC_6 (struct gfs2_sbd*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct gfs2_sbd *VAR_5)
{
 struct gfs2_holder VAR_6;
 int VAR_7;

 FUNC_1(VAR_4);
 FUNC_7(VAR_5->sd_vfs, 0);
 FUNC_8(VAR_5->sd_vfs, 0);

 VAR_7 = FUNC_3(VAR_5->sd_trans_gl, VAR_1, VAR_0,
       &VAR_6);
 if (VAR_7 && !FUNC_9(VAR_3, &VAR_5->sd_flags))
  return VAR_7;

 FUNC_5(VAR_5);
 FUNC_4(VAR_5);

 FUNC_0(VAR_2, &VAR_5->sd_flags);

 if (VAR_6.gh_gl)
  FUNC_2(&VAR_6);

 FUNC_6(VAR_5);

 return VAR_7;
}
