
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {TYPE_1__* rd_bits; int rd_gl; int rd_free; int rd_dinodes; struct gfs2_sbd* rd_sbd; } ;
struct TYPE_4__ {int b_data; } ;
struct TYPE_3__ {TYPE_2__* bi_bh; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_sbd*,int) ;
 int FUNC_1 (struct gfs2_rgrpd*) ;
 int FUNC_2 (struct gfs2_rgrpd*,int ) ;
 int FUNC_3 (struct gfs2_sbd*,int ,int,int) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 struct gfs2_rgrpd* FUNC_5 (struct gfs2_sbd*,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct gfs2_rgrpd *VAR_1, u64 VAR_2)
{
 struct gfs2_sbd *VAR_3 = VAR_1->rd_sbd;
 struct gfs2_rgrpd *VAR_4;

 VAR_4 = FUNC_5(VAR_3, VAR_2, 1, VAR_0);
 if (!VAR_4)
  return;
 FUNC_0(VAR_3, VAR_1 == VAR_4);

 if (!VAR_1->rd_dinodes)
  FUNC_1(VAR_1);
 VAR_1->rd_dinodes--;
 VAR_1->rd_free++;

 FUNC_4(VAR_1->rd_gl, VAR_1->rd_bits[0].bi_bh);
 FUNC_2(VAR_1, VAR_1->rd_bits[0].bi_bh->b_data);

 FUNC_3(VAR_3, 0, +1, -1);
}
