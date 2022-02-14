
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_fsname; } ;
struct gfs2_rgrpd {scalar_t__ rd_addr; struct gfs2_sbd* rd_sbd; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,int ,int ,unsigned long long,int ,char const*,char*,unsigned int) ;

int FUNC_1(struct gfs2_rgrpd *VAR_0, int VAR_1,
    const char *VAR_2, char *VAR_3, unsigned int VAR_4)
{
 struct gfs2_sbd *VAR_5 = VAR_0->rd_sbd;
 int VAR_6;
 VAR_6 = FUNC_0(VAR_5,
  "GFS2: fsid=%s: fatal: filesystem consistency error\n"
  "GFS2: fsid=%s:   RG = %llu\n"
  "GFS2: fsid=%s:   function = %s, file = %s, line = %u\n",
  VAR_5->sd_fsname,
  VAR_5->sd_fsname, (unsigned long long)VAR_0->rd_addr,
  VAR_5->sd_fsname, VAR_2, VAR_3, VAR_4);
 return VAR_6;
}
