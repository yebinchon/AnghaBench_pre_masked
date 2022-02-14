
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_flags; } ;
struct gfs2_glock_operations {int dummy; } ;
struct gfs2_glock {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,char*) ;
 int FUNC_2 (struct gfs2_glock*,unsigned int) ;
 int FUNC_3 (struct gfs2_sbd*,unsigned long long,struct gfs2_glock_operations const*,int ,struct gfs2_glock**) ;
 int FUNC_4 (struct gfs2_glock*) ;
 struct gfs2_glock_operations** VAR_8 ;
 int FUNC_5 (char const*,char*,unsigned int*,unsigned long long*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct gfs2_sbd *VAR_9, const char *VAR_10, size_t VAR_11)
{
 struct gfs2_glock *VAR_12;
 const struct gfs2_glock_operations *VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned long long VAR_16;
 char VAR_17[16];
 int VAR_18;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 VAR_18 = FUNC_5(VAR_10, "%u:%llu %15s", &VAR_15, &VAR_16,
      VAR_17);
 if (VAR_18 != 3)
  return -VAR_2;

 if (FUNC_6(VAR_17, "EX") == 0)
  VAR_14 = VAR_5;
 else if ((FUNC_6(VAR_17, "CW") == 0) || (FUNC_6(VAR_17, "DF") == 0))
  VAR_14 = VAR_3;
 else if ((FUNC_6(VAR_17, "PR") == 0) || (FUNC_6(VAR_17, "SH") == 0))
  VAR_14 = VAR_4;
 else
  return -VAR_2;

 if (VAR_15 > VAR_6)
  return -VAR_2;
 VAR_13 = VAR_8[VAR_15];
 if (VAR_13 == ((void*)0))
  return -VAR_2;
 if (!FUNC_7(VAR_7, &VAR_9->sd_flags))
  FUNC_1(VAR_9, "demote interface used\n");
 VAR_18 = FUNC_3(VAR_9, VAR_16, VAR_13, 0, &VAR_12);
 if (VAR_18)
  return VAR_18;
 FUNC_2(VAR_12, VAR_14);
 FUNC_4(VAR_12);
 return VAR_11;
}
