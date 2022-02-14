
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_jdesc {int jd_flags; int jd_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;

int FUNC_2(struct gfs2_jdesc *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_0(&VAR_3->jd_work);
 if (VAR_4)
  return VAR_4;
 FUNC_1(&VAR_3->jd_flags, VAR_0, VAR_2, VAR_1);
 return 0;
}
