
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef struct gfs2_rbm {TYPE_1__* bi; TYPE_2__* rgd; } const gfs2_rbm ;
struct TYPE_4__ {int rd_gl; } ;
struct TYPE_3__ {int bi_bh; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gfs2_rbm const*,int ) ;
 int FUNC_1 (struct gfs2_rbm const*) ;
 int FUNC_2 (struct gfs2_rbm const*,int,int ) ;
 scalar_t__ FUNC_3 (struct gfs2_rbm const*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(const struct gfs2_rbm *VAR_3, bool VAR_4,
        unsigned int *VAR_5)
{
 struct gfs2_rbm VAR_6 = { .rgd = VAR_3->rgd, };
 const unsigned int VAR_7 = *VAR_5;
 u64 VAR_8;
 int VAR_9;

 *VAR_5 = 1;
 VAR_8 = FUNC_1(VAR_3);
 FUNC_4(VAR_3->rgd->rd_gl, VAR_3->bi->bi_bh);
 FUNC_2(VAR_3, 1, VAR_4 ? VAR_0 : VAR_2);
 VAR_8++;
 while (*VAR_5 < VAR_7) {
  VAR_9 = FUNC_0(&VAR_6, VAR_8);
  if (VAR_9 || FUNC_3(&VAR_6) != VAR_1)
   break;
  FUNC_4(VAR_6.rgd->rd_gl, VAR_6.bi->bi_bh);
  FUNC_2(&VAR_6, 1, VAR_2);
  (*VAR_5)++;
  VAR_8++;
 }
}
