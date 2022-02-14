
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfs2_sbd*,char*,char const*,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct gfs2_sbd *VAR_2, const char *VAR_3, int VAR_4)
{
 if (VAR_4 == 0 || VAR_4 == -VAR_0)
  return;
 if (!FUNC_1(VAR_1, &VAR_2->sd_flags))
  FUNC_0(VAR_2, "gfs2_quotad: %s error %d\n", VAR_3, VAR_4);
}
