
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_rgrpd {int dummy; } ;
struct gfs2_glock {scalar_t__ gl_state; int gl_spin; struct gfs2_rgrpd* gl_object; int gl_sbd; int gl_flags; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct address_space*) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct gfs2_glock*) ;
 int FUNC_4 (struct gfs2_rgrpd*) ;
 struct address_space* FUNC_5 (struct gfs2_glock*) ;
 int FUNC_6 (int ,struct gfs2_glock*) ;
 int FUNC_7 (struct address_space*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct gfs2_glock *VAR_2)
{
 struct address_space *VAR_3 = FUNC_5(VAR_2);
 struct gfs2_rgrpd *VAR_4;
 int VAR_5;

 if (!FUNC_10(VAR_0, &VAR_2->gl_flags))
  return;
 FUNC_0(VAR_2->gl_state != VAR_1);

 FUNC_6(VAR_2->gl_sbd, VAR_2);
 FUNC_2(VAR_3);
 VAR_5 = FUNC_1(VAR_3);
        FUNC_7(VAR_3, VAR_5);
 FUNC_3(VAR_2);

 FUNC_8(&VAR_2->gl_spin);
 VAR_4 = VAR_2->gl_object;
 if (VAR_4)
  FUNC_4(VAR_4);
 FUNC_9(&VAR_2->gl_spin);
}
