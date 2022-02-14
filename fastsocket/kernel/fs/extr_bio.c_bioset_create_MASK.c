
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int dummy; } ;
struct bio_set {unsigned int front_pad; int bio_pool; int bio_slab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct bio_set*) ;
 int FUNC_2 (struct bio_set*,unsigned int) ;
 int FUNC_3 (struct bio_set*) ;
 struct bio_set* FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned int,int ) ;

struct bio_set *FUNC_6(unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_0 * sizeof(struct bio_vec);
 struct bio_set *VAR_5;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->front_pad = VAR_3;

 VAR_5->bio_slab = FUNC_0(VAR_3 + VAR_4);
 if (!VAR_5->bio_slab) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_5->bio_pool = FUNC_5(VAR_2, VAR_5->bio_slab);
 if (!VAR_5->bio_pool)
  goto bad;

 if (!FUNC_2(VAR_5, VAR_2))
  return VAR_5;

bad:
 FUNC_1(VAR_5);
 return ((void*)0);
}
