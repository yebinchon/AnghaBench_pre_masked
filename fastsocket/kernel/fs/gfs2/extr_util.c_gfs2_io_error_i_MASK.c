
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_fsname; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,int ,int ,char const*,char*,unsigned int) ;

int FUNC_1(struct gfs2_sbd *VAR_0, const char *VAR_1, char *VAR_2,
      unsigned int VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_0(VAR_0,
  "GFS2: fsid=%s: fatal: I/O error\n"
  "GFS2: fsid=%s:   function = %s, file = %s, line = %u\n",
  VAR_0->sd_fsname,
  VAR_0->sd_fsname, VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
