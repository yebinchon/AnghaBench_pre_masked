
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct gfs2_rbm {int offset; TYPE_2__* bi; } ;
struct TYPE_4__ {int bi_offset; TYPE_1__* bi_bh; } ;
struct TYPE_3__ {unsigned int* b_data; } ;


 unsigned int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline u8 FUNC_0(const struct gfs2_rbm *VAR_3)
{
 const u8 *VAR_4 = VAR_3->bi->bi_bh->b_data + VAR_3->bi->bi_offset;
 const u8 *VAR_5;
 unsigned int VAR_6;

 VAR_5 = VAR_4 + (VAR_3->offset / VAR_2);
 VAR_6 = (VAR_3->offset % VAR_2) * VAR_1;

 return (*VAR_5 >> VAR_6) & VAR_0;
}
