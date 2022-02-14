
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {struct csrow_info* csrows; struct i5400_pvt* pvt_info; } ;
struct i5400_pvt {int maxch; int maxdimmperch; TYPE_1__** dimm_info; } ;
struct csrow_info {int csrow_idx; int last_page; int page_mask; int grain; int nr_pages; int edac_mode; int dtype; int mtype; scalar_t__ first_page; } ;
struct TYPE_2__ {scalar_t__ megabytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct i5400_pvt*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct mem_ctl_info *VAR_4)
{
 struct i5400_pvt *VAR_5;
 struct csrow_info *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_5 = VAR_4->pvt_info;

 VAR_8 = VAR_5->maxch;
 VAR_9 = VAR_5->maxdimmperch;

 VAR_7 = 1;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_6 = &VAR_4->csrows[VAR_13];

  VAR_6->csrow_idx = VAR_13;


  VAR_10 = FUNC_2(VAR_5, VAR_13, 0);


  if (!FUNC_0(VAR_10))
   continue;


  VAR_6->first_page = 0 + VAR_13 * 20;
  VAR_6->last_page = 9 + VAR_13 * 20;
  VAR_6->page_mask = 0xFFF;

  VAR_6->grain = 8;

  VAR_11 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_5->maxch; VAR_12++)
   VAR_11 += VAR_5->dimm_info[VAR_13][VAR_12].megabytes;

  VAR_6->nr_pages = VAR_11 << 8;


  VAR_6->mtype = VAR_3;


  if (FUNC_1(VAR_10))
   VAR_6->dtype = VAR_1;
  else
   VAR_6->dtype = VAR_0;

  VAR_6->edac_mode = VAR_2;

  VAR_7 = 0;
 }

 return VAR_7;
}
