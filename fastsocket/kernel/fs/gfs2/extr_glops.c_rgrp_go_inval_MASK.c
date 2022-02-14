
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_rgrpd {int rd_flags; } ;
struct gfs2_glock {scalar_t__ gl_object; int gl_ail_count; int gl_sbd; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 struct address_space* FUNC_3 (struct gfs2_glock*) ;
 int FUNC_4 (struct address_space*,int ) ;

__attribute__((used)) static void FUNC_5(struct gfs2_glock *VAR_2, int VAR_3)
{
 struct address_space *VAR_4 = FUNC_3(VAR_2);

 FUNC_0(!(VAR_3 & VAR_0));
 FUNC_2(VAR_2->gl_sbd, !FUNC_1(&VAR_2->gl_ail_count));
 FUNC_4(VAR_4, 0);

 if (VAR_2->gl_object) {
  struct gfs2_rgrpd *VAR_5 = (struct gfs2_rgrpd *)VAR_2->gl_object;
  VAR_5->rd_flags &= ~VAR_1;
 }
}
