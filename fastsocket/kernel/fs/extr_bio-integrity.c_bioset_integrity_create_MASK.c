
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio_set {int bio_integrity_pool; } ;
struct TYPE_2__ {int slab; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (int ) ;

int FUNC_2(struct bio_set *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_0);

 if (VAR_2->bio_integrity_pool)
  return 0;

 VAR_2->bio_integrity_pool =
  FUNC_0(VAR_3, VAR_1[VAR_4].slab);

 if (!VAR_2->bio_integrity_pool)
  return -1;

 return 0;
}
