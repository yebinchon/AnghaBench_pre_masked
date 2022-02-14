
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_segments; TYPE_1__* seg; } ;
struct blk_shadow {TYPE_2__ req; } ;
struct TYPE_3__ {int gref; } ;


 int FUNC_0 (int ,int ,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct blk_shadow *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->req.nr_segments; VAR_1++)
  FUNC_0(VAR_0->req.seg[VAR_1].gref, 0, 0UL);
}
