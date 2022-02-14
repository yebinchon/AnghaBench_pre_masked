
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {int gl_sbd; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (struct address_space*) ;
 int FUNC_1 (struct address_space*) ;
 struct address_space* FUNC_2 (struct gfs2_glock*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct gfs2_glock *VAR_0)
{
 struct address_space *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_1(VAR_1);
 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2)
  FUNC_3(VAR_0->gl_sbd);
}
