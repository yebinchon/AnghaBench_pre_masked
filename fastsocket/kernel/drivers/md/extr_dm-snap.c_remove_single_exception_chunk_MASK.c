
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {scalar_t__ first_merging_chunk; scalar_t__ num_merging_chunks; int lock; } ;
struct bio {int dummy; } ;
typedef scalar_t__ chunk_t ;


 struct bio* FUNC_0 (struct dm_snapshot*) ;
 int FUNC_1 (struct dm_snapshot*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dm_snapshot *VAR_0)
{
 struct bio *VAR_1 = ((void*)0);
 int VAR_2;
 chunk_t VAR_3 = VAR_0->first_merging_chunk + VAR_0->num_merging_chunks - 1;

 FUNC_2(&VAR_0->lock);





 do {
  VAR_2 = FUNC_1(VAR_0, VAR_3);
  if (VAR_2)
   goto out;
 } while (VAR_3-- > VAR_0->first_merging_chunk);

 VAR_1 = FUNC_0(VAR_0);

out:
 FUNC_4(&VAR_0->lock);
 if (VAR_1)
  FUNC_3(VAR_1);

 return VAR_2;
}
