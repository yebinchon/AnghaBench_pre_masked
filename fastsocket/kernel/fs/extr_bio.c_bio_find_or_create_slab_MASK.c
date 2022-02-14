
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
struct bio_slab {unsigned int slab_size; int slab_ref; struct kmem_cache* slab; int name; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct bio_slab* VAR_5 ;
 struct kmem_cache* FUNC_0 (int ,unsigned int,int ,int ,int *) ;
 struct bio_slab* FUNC_1 (struct bio_slab*,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,unsigned int) ;
 int FUNC_5 (int ,int,char*,unsigned int) ;

__attribute__((used)) static struct kmem_cache *FUNC_6(unsigned int VAR_6)
{
 unsigned int VAR_7 = sizeof(struct bio) + VAR_6;
 struct kmem_cache *VAR_8 = ((void*)0);
 struct bio_slab *VAR_9;
 unsigned int VAR_10, VAR_11 = -1;

 FUNC_2(&VAR_2);

 VAR_10 = 0;
 while (VAR_10 < VAR_4) {
  struct bio_slab *VAR_12 = &VAR_5[VAR_10];

  if (!VAR_12->slab && VAR_11 == -1)
   VAR_11 = VAR_10;
  else if (VAR_12->slab_size == VAR_7) {
   VAR_8 = VAR_12->slab;
   VAR_12->slab_ref++;
   break;
  }
  VAR_10++;
 }

 if (VAR_8)
  goto out_unlock;

 if (VAR_4 == VAR_3 && VAR_11 == -1) {
  VAR_3 <<= 1;
  VAR_5 = FUNC_1(VAR_5,
         VAR_3 * sizeof(struct bio_slab),
         VAR_0);
  if (!VAR_5)
   goto out_unlock;
 }
 if (VAR_11 == -1)
  VAR_11 = VAR_4++;

 VAR_9 = &VAR_5[VAR_11];

 FUNC_5(VAR_9->name, sizeof(VAR_9->name), "bio-%d", VAR_11);
 VAR_8 = FUNC_0(VAR_9->name, VAR_7, 0, VAR_1, ((void*)0));
 if (!VAR_8)
  goto out_unlock;

 FUNC_4("bio: create slab <%s> at %d\n", VAR_9->name, VAR_11);
 VAR_9->slab = VAR_8;
 VAR_9->slab_ref = 1;
 VAR_9->slab_size = VAR_7;
out_unlock:
 FUNC_3(&VAR_2);
 return VAR_8;
}
