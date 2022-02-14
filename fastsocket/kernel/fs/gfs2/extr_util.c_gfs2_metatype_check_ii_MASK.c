
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gfs2_sbd {int sd_fsname; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,int ,int ,unsigned long long,int ,int ,int ,char const*,char*,unsigned int) ;

int FUNC_1(struct gfs2_sbd *VAR_0, struct buffer_head *VAR_1,
      u16 VAR_2, u16 VAR_3, const char *VAR_4,
      char *VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 VAR_7 = FUNC_0(VAR_0,
  "GFS2: fsid=%s: fatal: invalid metadata block\n"
  "GFS2: fsid=%s:   bh = %llu (type: exp=%u, found=%u)\n"
  "GFS2: fsid=%s:   function = %s, file = %s, line = %u\n",
  VAR_0->sd_fsname,
  VAR_0->sd_fsname, (unsigned long long)VAR_1->b_blocknr, VAR_2, VAR_3,
  VAR_0->sd_fsname, VAR_4, VAR_5, VAR_6);
 return (VAR_7) ? -1 : -2;
}
