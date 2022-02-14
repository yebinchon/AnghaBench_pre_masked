
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct t4_cq {size_t cidx; int cidx_inc; int size; int gen; int gts; int cqid; TYPE_1__* queue; int bits_type_ts; } ;
struct TYPE_2__ {int bits_type_ts; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static inline void FUNC_5(struct t4_cq *VAR_0)
{
 VAR_0->bits_type_ts = VAR_0->queue[VAR_0->cidx].bits_type_ts;
 if (++VAR_0->cidx_inc == (VAR_0->size >> 4)) {
  u32 VAR_1;

  VAR_1 = FUNC_2(0) | FUNC_0(VAR_0->cidx_inc) | FUNC_3(7) |
        FUNC_1(VAR_0->cqid);
  FUNC_4(VAR_1, VAR_0->gts);
  VAR_0->cidx_inc = 0;
 }
 if (++VAR_0->cidx == VAR_0->size) {
  VAR_0->cidx = 0;
  VAR_0->gen ^= 1;
 }
}
