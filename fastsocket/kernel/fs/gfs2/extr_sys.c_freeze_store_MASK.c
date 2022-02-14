
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,char*,int,int) ;
 int FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (struct gfs2_sbd*) ;
 int FUNC_4 (char const*,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct gfs2_sbd *VAR_3, const char *VAR_4, size_t VAR_5)
{
 ssize_t VAR_6 = VAR_5;
 int VAR_7 = 0;
 int VAR_8 = FUNC_4(VAR_4, ((void*)0), 0);

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 switch (VAR_8) {
 case 0:
  FUNC_3(VAR_3);
  break;
 case 1:
  VAR_7 = FUNC_2(VAR_3);
  break;
 default:
  VAR_6 = -VAR_2;
 }

 if (VAR_7)
  FUNC_1(VAR_3, "freeze %d error %d", VAR_8, VAR_7);

 return VAR_6;
}
