
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct gfs2_rbm {scalar_t__ offset; TYPE_2__* bi; TYPE_1__* rgd; } ;
struct TYPE_4__ {int bi_start; } ;
struct TYPE_3__ {scalar_t__ rd_data0; } ;


 int VAR_0 ;

__attribute__((used)) static inline u64 FUNC_0(const struct gfs2_rbm *VAR_1)
{
 return VAR_1->rgd->rd_data0 + (VAR_1->bi->bi_start * VAR_0) + VAR_1->offset;
}
