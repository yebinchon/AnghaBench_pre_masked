
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mapsz; int access_flags; int max_segs; struct ipath_fmr** map; scalar_t__ offset; scalar_t__ length; scalar_t__ iova; scalar_t__ user_base; struct ib_pd* pd; int lkey; } ;
struct ib_fmr {int lkey; int rkey; } ;
struct ipath_fmr {TYPE_2__ mr; struct ib_fmr ibfmr; int page_shift; } ;
struct ib_pd {int device; } ;
struct ib_fmr_attr {int max_pages; int page_shift; } ;
struct TYPE_3__ {int lk_table; } ;


 int VAR_0 ;
 struct ib_fmr* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (struct ipath_fmr*) ;
 void* FUNC_3 (int,int ) ;
 TYPE_1__* FUNC_4 (int ) ;

struct ib_fmr *FUNC_5(struct ib_pd *VAR_3, int VAR_4,
          struct ib_fmr_attr *VAR_5)
{
 struct ipath_fmr *VAR_6;
 int VAR_7, VAR_8 = 0;
 struct ib_fmr *VAR_9;


 VAR_7 = (VAR_5->max_pages + VAR_2 - 1) / VAR_2;
 VAR_6 = FUNC_3(sizeof *VAR_6 + VAR_7 * sizeof VAR_6->mr.map[0], VAR_1);
 if (!VAR_6)
  goto bail;


 for (; VAR_8 < VAR_7; VAR_8++) {
  VAR_6->mr.map[VAR_8] = FUNC_3(sizeof *VAR_6->mr.map[0],
      VAR_1);
  if (!VAR_6->mr.map[VAR_8])
   goto bail;
 }
 VAR_6->mr.mapsz = VAR_7;





 if (!FUNC_1(&FUNC_4(VAR_3->device)->lk_table, &VAR_6->mr))
  goto bail;
 VAR_6->ibfmr.rkey = VAR_6->ibfmr.lkey = VAR_6->mr.lkey;




 VAR_6->mr.pd = VAR_3;
 VAR_6->mr.user_base = 0;
 VAR_6->mr.iova = 0;
 VAR_6->mr.length = 0;
 VAR_6->mr.offset = 0;
 VAR_6->mr.access_flags = VAR_4;
 VAR_6->mr.max_segs = VAR_5->max_pages;
 VAR_6->page_shift = VAR_5->page_shift;

 VAR_9 = &VAR_6->ibfmr;
 goto done;

bail:
 while (VAR_8)
  FUNC_2(VAR_6->mr.map[--VAR_8]);
 FUNC_2(VAR_6);
 VAR_9 = FUNC_0(-VAR_0);

done:
 return VAR_9;
}
