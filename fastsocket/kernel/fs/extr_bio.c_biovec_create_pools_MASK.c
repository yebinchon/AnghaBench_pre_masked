
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biovec_slab {int slab; } ;
struct bio_set {int bvec_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct biovec_slab* VAR_2 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct bio_set *VAR_3, int VAR_4)
{
 struct biovec_slab *VAR_5 = VAR_2 + VAR_0;

 VAR_3->bvec_pool = FUNC_0(VAR_4, VAR_5->slab);
 if (!VAR_3->bvec_pool)
  return -VAR_1;

 return 0;
}
