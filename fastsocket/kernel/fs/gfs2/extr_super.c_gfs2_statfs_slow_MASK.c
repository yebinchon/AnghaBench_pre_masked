
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_statfs_change_host {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct gfs2_holder {TYPE_1__* gh_gl; } ;
struct TYPE_2__ {int gl_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gfs2_holder*) ;
 int FUNC_1 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_holder*) ;
 struct gfs2_rgrpd* FUNC_5 (struct gfs2_sbd*) ;
 struct gfs2_rgrpd* FUNC_6 (struct gfs2_rgrpd*) ;
 struct gfs2_holder* FUNC_7 (unsigned int,int,int ) ;
 int FUNC_8 (struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_statfs_change_host*,int ,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,struct gfs2_statfs_change_host*) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct gfs2_sbd *VAR_6, struct gfs2_statfs_change_host *VAR_7)
{
 struct gfs2_rgrpd *VAR_8;
 struct gfs2_holder *VAR_9, *VAR_10;
 unsigned int VAR_11 = 64;
 unsigned int VAR_12;
 int VAR_13;
 int VAR_14 = 0, VAR_15;

 FUNC_9(VAR_7, 0, sizeof(struct gfs2_statfs_change_host));
 VAR_9 = FUNC_7(VAR_11, sizeof(struct gfs2_holder), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_6);

 for (;;) {
  VAR_13 = 1;

  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   VAR_10 = VAR_9 + VAR_12;

   if (VAR_10->gh_gl && FUNC_2(VAR_10)) {
    VAR_15 = FUNC_3(VAR_10);
    if (VAR_15) {
     FUNC_4(VAR_10);
     VAR_14 = VAR_15;
    } else {
     if (!VAR_14)
      VAR_14 = FUNC_11(
       VAR_10->gh_gl->gl_object, VAR_7);
     FUNC_0(VAR_10);
    }
   }

   if (VAR_10->gh_gl)
    VAR_13 = 0;
   else if (VAR_8 && !VAR_14) {
    VAR_14 = FUNC_1(VAR_8->rd_gl,
          VAR_4,
          VAR_3,
          VAR_10);
    VAR_8 = FUNC_6(VAR_8);
    VAR_13 = 0;
   }

   if (FUNC_10(VAR_5))
    VAR_14 = -VAR_1;
  }

  if (VAR_13)
   break;

  FUNC_12();
 }

 FUNC_8(VAR_9);
 return VAR_14;
}
