
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_fsname; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,int ,int ,unsigned long long,char const*,int ,char const*,char*,unsigned int) ;

int FUNC_1(struct gfs2_sbd *VAR_0, struct buffer_head *VAR_1,
         const char *VAR_2, const char *VAR_3, char *VAR_4,
         unsigned int VAR_5)
{
 int VAR_6;
 VAR_6 = FUNC_0(VAR_0,
  "GFS2: fsid=%s: fatal: invalid metadata block\n"
  "GFS2: fsid=%s:   bh = %llu (%s)\n"
  "GFS2: fsid=%s:   function = %s, file = %s, line = %u\n",
  VAR_0->sd_fsname,
  VAR_0->sd_fsname, (unsigned long long)VAR_1->b_blocknr, VAR_2,
  VAR_0->sd_fsname, VAR_3, VAR_4, VAR_5);
 return (VAR_6) ? -1 : -2;
}
