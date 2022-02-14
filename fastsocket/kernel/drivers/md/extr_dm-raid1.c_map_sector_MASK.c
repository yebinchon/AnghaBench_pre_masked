
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror {TYPE_1__* ms; scalar_t__ offset; } ;
struct bio {int bi_sector; int bi_size; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int ti; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static sector_t FUNC_2(struct mirror *VAR_0, struct bio *VAR_1)
{
 if (FUNC_1(!VAR_1->bi_size))
  return 0;
 return VAR_0->offset + FUNC_0(VAR_0->ms->ti, VAR_1->bi_sector);
}
