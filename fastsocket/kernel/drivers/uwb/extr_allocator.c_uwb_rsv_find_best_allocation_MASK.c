
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv_alloc_info {int max_interval; scalar_t__* bm; int unsafe_allocated_mases; int safe_allocated_mases; int max_mas; int min_mas; } ;
struct uwb_rsv {int max_interval; int max_mas; int min_mas; } ;
struct uwb_mas_bm {int unsafe; int safe; int unsafe_bm; int bm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct uwb_rsv_alloc_info*) ;
 int FUNC_3 (struct uwb_rsv_alloc_info*) ;
 int FUNC_4 (struct uwb_rsv_alloc_info*) ;
 struct uwb_rsv_alloc_info* FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (struct uwb_rsv_alloc_info*,int) ;
 scalar_t__ FUNC_9 (struct uwb_rsv_alloc_info*) ;

int FUNC_10(struct uwb_rsv *VAR_7, struct uwb_mas_bm *VAR_8,
     struct uwb_mas_bm *VAR_9)
{
 struct uwb_rsv_alloc_info *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_5(sizeof(struct uwb_rsv_alloc_info), VAR_0);

 VAR_10->min_mas = VAR_7->min_mas;
 VAR_10->max_mas = VAR_7->max_mas;
 VAR_10->max_interval = VAR_7->max_interval;



 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  if (!FUNC_7(VAR_12, VAR_8->bm))
   VAR_10->bm[VAR_12] = VAR_4;
 }

 if (VAR_10->max_interval == 1) {
  FUNC_3(VAR_10);
  if (FUNC_9(VAR_10) == VAR_2)
   goto alloc_found;
  else
   goto alloc_not_found;
 }

 FUNC_2(VAR_10);

 for (VAR_11 = 16; VAR_11 >= 2; VAR_11>>=1) {
  if (VAR_11 > VAR_10->max_interval)
   continue;
  if (FUNC_8(VAR_10, VAR_11) == VAR_2)
   goto alloc_found;
 }


 FUNC_3(VAR_10);
 if (FUNC_9(VAR_10) == VAR_2)
  goto alloc_found;
 else
  goto alloc_not_found;

  alloc_found:
 FUNC_1(VAR_9->bm, VAR_1);
 FUNC_1(VAR_9->unsafe_bm, VAR_1);

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  if (VAR_10->bm[VAR_12] == VAR_5)
   FUNC_6(VAR_12, VAR_9->bm);
  else if (VAR_10->bm[VAR_12] == VAR_6)
   FUNC_6(VAR_12, VAR_9->unsafe_bm);
 }
 FUNC_0(VAR_9->bm, VAR_9->bm, VAR_9->unsafe_bm, VAR_1);

 VAR_9->safe = VAR_10->safe_allocated_mases;
 VAR_9->unsafe = VAR_10->unsafe_allocated_mases;

 FUNC_4(VAR_10);
 return VAR_2;

  alloc_not_found:
 FUNC_4(VAR_10);
 return VAR_3;
}
