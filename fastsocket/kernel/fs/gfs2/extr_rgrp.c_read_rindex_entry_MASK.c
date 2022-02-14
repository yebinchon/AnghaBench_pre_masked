
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int sd_rgrps; scalar_t__ sd_max_rg_data; int sd_rindex_spin; } ;
struct gfs2_rindex {int ri_bitbytes; int ri_data; int ri_data0; int ri_length; int ri_addr; } ;
struct gfs2_rgrpd {scalar_t__ rd_data; int rd_bits; TYPE_1__* rd_gl; int rd_flags; void* rd_addr; int rd_rsspin; void* rd_bitbytes; void* rd_data0; void* rd_length; struct gfs2_sbd* rd_sbd; } ;
struct gfs2_inode {int i_inode; } ;
struct file_ra_state {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {struct gfs2_rgrpd* gl_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct gfs2_rgrpd*) ;
 int FUNC_4 (struct gfs2_sbd*,void*,int *,int ,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct gfs2_inode*,struct file_ra_state*,char*,scalar_t__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct gfs2_rgrpd*) ;
 struct gfs2_rgrpd* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct gfs2_rgrpd*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct gfs2_inode *VAR_6,
        struct file_ra_state *VAR_7)
{
 struct gfs2_sbd *VAR_8 = FUNC_0(&VAR_6->i_inode);
 loff_t VAR_9 = VAR_8->sd_rgrps * sizeof(struct gfs2_rindex);
 struct gfs2_rindex VAR_10;
 int VAR_11;
 struct gfs2_rgrpd *VAR_12;

 if (VAR_9 >= FUNC_7(&VAR_6->i_inode))
  return 1;

 VAR_11 = FUNC_6(VAR_6, VAR_7, (char *)&VAR_10, &VAR_9,
       sizeof(struct gfs2_rindex));

 if (VAR_11 != sizeof(struct gfs2_rindex))
  return (VAR_11 == 0) ? 1 : VAR_11;

 VAR_12 = FUNC_10(VAR_5, VAR_2);
 VAR_11 = -VAR_1;
 if (!VAR_12)
  return VAR_11;

 VAR_12->rd_sbd = VAR_8;
 VAR_12->rd_addr = FUNC_2(VAR_10.ri_addr);
 VAR_12->rd_length = FUNC_1(VAR_10.ri_length);
 VAR_12->rd_data0 = FUNC_2(VAR_10.ri_data0);
 VAR_12->rd_data = FUNC_1(VAR_10.ri_data);
 VAR_12->rd_bitbytes = FUNC_1(VAR_10.ri_bitbytes);
 FUNC_13(&VAR_12->rd_rsspin);

 VAR_11 = FUNC_3(VAR_12);
 if (VAR_11)
  goto fail;

 VAR_11 = FUNC_4(VAR_8, VAR_12->rd_addr,
          &VAR_4, VAR_0, &VAR_12->rd_gl);
 if (VAR_11)
  goto fail;

 VAR_12->rd_gl->gl_object = VAR_12;
 VAR_12->rd_flags &= ~VAR_3;
 if (VAR_12->rd_data > VAR_8->sd_max_rg_data)
  VAR_8->sd_max_rg_data = VAR_12->rd_data;
 FUNC_12(&VAR_8->sd_rindex_spin);
 VAR_11 = FUNC_11(VAR_12);
 FUNC_14(&VAR_8->sd_rindex_spin);
 if (!VAR_11)
  return 0;

 VAR_11 = 0;
 FUNC_5(VAR_12->rd_gl);

fail:
 FUNC_8(VAR_12->rd_bits);
 FUNC_9(VAR_5, VAR_12);
 return VAR_11;
}
