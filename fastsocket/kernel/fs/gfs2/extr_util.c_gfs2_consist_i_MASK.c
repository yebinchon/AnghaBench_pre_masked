
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_fsname; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,int ,int ,char const*,char*,unsigned int) ;

int FUNC_1(struct gfs2_sbd *VAR_0, int VAR_1, const char *VAR_2,
     char *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_0,
  "GFS2: fsid=%s: fatal: filesystem consistency error\n"
  "GFS2: fsid=%s:   function = %s, file = %s, line = %u\n",
  VAR_0->sd_fsname,
  VAR_0->sd_fsname, VAR_2, VAR_3, VAR_4);
 return VAR_5;
}
