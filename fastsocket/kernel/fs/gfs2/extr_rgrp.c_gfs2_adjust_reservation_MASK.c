
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct gfs2_rgrpd {unsigned int rd_reserved; int rd_rsspin; } ;
struct gfs2_rbm {struct gfs2_rgrpd* rgd; } ;
struct gfs2_inode {struct gfs2_blkreserv* i_res; } ;
struct gfs2_blkreserv {scalar_t__ rs_free; int rs_rbm; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_blkreserv*) ;
 scalar_t__ FUNC_1 (int *,struct gfs2_rbm const*) ;
 int FUNC_2 (int *,unsigned int) ;
 unsigned int FUNC_3 (struct gfs2_rbm const*) ;
 scalar_t__ FUNC_4 (struct gfs2_blkreserv*) ;
 unsigned int FUNC_5 (scalar_t__,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct gfs2_blkreserv*,int ) ;

__attribute__((used)) static void FUNC_9(struct gfs2_inode *VAR_1,
        const struct gfs2_rbm *VAR_2, unsigned VAR_3)
{
 struct gfs2_blkreserv *VAR_4 = VAR_1->i_res;
 struct gfs2_rgrpd *VAR_5 = VAR_2->rgd;
 unsigned VAR_6;
 u64 VAR_7;
 int VAR_8;

 FUNC_6(&VAR_5->rd_rsspin);
 if (FUNC_4(VAR_4)) {
  if (FUNC_1(&VAR_4->rs_rbm, VAR_2)) {
   VAR_7 = FUNC_3(VAR_2);
   VAR_8 = FUNC_2(&VAR_4->rs_rbm, VAR_7 + VAR_3);
   VAR_6 = FUNC_5(VAR_4->rs_free, VAR_3);
   VAR_4->rs_free -= VAR_6;
   VAR_5->rd_reserved -= VAR_6;
   FUNC_8(VAR_4, VAR_0);
   if (VAR_4->rs_free && !VAR_8)
    goto out;
  }
  FUNC_0(VAR_4);
 }
out:
 FUNC_7(&VAR_5->rd_rsspin);
}
