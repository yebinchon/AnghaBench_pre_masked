
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fence; } ;
struct radeon_cs_parser {unsigned int nrelocs; unsigned int nchunks; TYPE_2__ const_ib; TYPE_1__* rdev; TYPE_2__ ib; TYPE_3__* chunks_array; TYPE_3__* chunks; TYPE_3__* relocs_ptr; TYPE_3__* relocs; TYPE_3__* track; int validated; } ;
struct TYPE_6__ {struct TYPE_6__** kpage; struct TYPE_6__* kdata; scalar_t__ gobj; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct radeon_cs_parser *VAR_1, int VAR_2)
{
 unsigned VAR_3;

 if (!VAR_2) {
  FUNC_4(&VAR_1->validated,
         VAR_1->ib.fence);
 } else {
  FUNC_3(&VAR_1->validated);
 }

 if (VAR_1->relocs != ((void*)0)) {
  for (VAR_3 = 0; VAR_3 < VAR_1->nrelocs; VAR_3++) {
   if (VAR_1->relocs[VAR_3].gobj)
    FUNC_0(VAR_1->relocs[VAR_3].gobj);
  }
 }
 FUNC_1(VAR_1->track);
 FUNC_1(VAR_1->relocs);
 FUNC_1(VAR_1->relocs_ptr);
 for (VAR_3 = 0; VAR_3 < VAR_1->nchunks; VAR_3++) {
  FUNC_1(VAR_1->chunks[VAR_3].kdata);
  if ((VAR_1->rdev->flags & VAR_0)) {
   FUNC_1(VAR_1->chunks[VAR_3].kpage[0]);
   FUNC_1(VAR_1->chunks[VAR_3].kpage[1]);
  }
 }
 FUNC_1(VAR_1->chunks);
 FUNC_1(VAR_1->chunks_array);
 FUNC_2(VAR_1->rdev, &VAR_1->ib);
 FUNC_2(VAR_1->rdev, &VAR_1->const_ib);
}
