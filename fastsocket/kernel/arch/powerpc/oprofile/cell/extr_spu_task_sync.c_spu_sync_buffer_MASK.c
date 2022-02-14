
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vma_to_fileoffset_map {int dummy; } ;
struct spu {int dummy; } ;
struct cached_info {struct spu* the_spu; struct vma_to_fileoffset_map* map; } ;
struct TYPE_2__ {int last_guard_val; scalar_t__ ctx_sw_seen; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cached_info* FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 TYPE_1__* VAR_2 ;
 int FUNC_6 (unsigned long long,int) ;
 unsigned long long FUNC_7 (struct vma_to_fileoffset_map*,unsigned int,struct spu*,int*) ;

void FUNC_8(int VAR_3, unsigned int *VAR_4,
       int VAR_5)
{
 unsigned long long VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 struct vma_to_fileoffset_map *VAR_9;
 struct spu *VAR_10;
 unsigned long long VAR_11 = VAR_3;
 unsigned long long VAR_12 = VAR_11 << 32;
 struct cached_info *VAR_13;






 FUNC_3(&VAR_1, VAR_7);
 VAR_13 = FUNC_0(((void*)0), VAR_3);
 if (!VAR_13) {




  FUNC_1("SPU_PROF: No cached SPU contex "
     "for SPU #%d. Dropping samples.\n", VAR_3);
  goto out;
 }

 VAR_9 = VAR_13->map;
 VAR_10 = VAR_13->the_spu;
 FUNC_2(&VAR_0);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  unsigned int VAR_14 = *(VAR_4+VAR_8);
  int VAR_15 = 0;
  VAR_6 = 0;
  if (VAR_14 == 0)
   continue;
  VAR_6 = FUNC_7( VAR_9, VAR_14, VAR_10, &VAR_15);






  if (VAR_15 && VAR_15 != VAR_2[VAR_3].last_guard_val) {
   VAR_2[VAR_3].last_guard_val = VAR_15;

   break;
  }






  if (VAR_2[VAR_3].ctx_sw_seen)
   FUNC_6((VAR_6 | VAR_12),
      VAR_3);
 }
 FUNC_4(&VAR_0);
out:
 FUNC_5(&VAR_1, VAR_7);
}
