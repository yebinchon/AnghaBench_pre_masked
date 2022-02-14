
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qib_user_info {size_t spu_port; } ;
struct qib_devdata {size_t num_pports; size_t pport; size_t first_user_ctxt; size_t cfgctxts; scalar_t__* rcd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct file*,struct qib_devdata*,size_t,struct qib_user_info const*) ;
 int FUNC_1 (int*,int*) ;
 struct qib_devdata* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (size_t) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, const struct qib_user_info *VAR_5,
        unsigned VAR_6)
{
 struct qib_devdata *VAR_7 = ((void*)0);
 int VAR_8 = 0, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0, VAR_14;
 u32 VAR_15 = VAR_5->spu_port, VAR_16;

 VAR_9 = FUNC_1(&VAR_10, &VAR_11);
 if (!VAR_10) {
  VAR_8 = -VAR_2;
  goto done;
 }
 if (VAR_11 == 0) {
  VAR_8 = -VAR_1;
  goto done;
 }

 if (VAR_6 == VAR_3) {
  unsigned VAR_17 = ~0U;

  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
   struct qib_devdata *VAR_18 = FUNC_2(VAR_12);
   unsigned VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
   if (!VAR_18)
    continue;
   if (VAR_15 && VAR_15 <= VAR_18->num_pports &&
       FUNC_3(VAR_18->pport + VAR_15 - 1))
    VAR_21 = 1;
   else
    for (VAR_14 = 0; VAR_14 < VAR_18->num_pports; VAR_14++)
     if (FUNC_3(VAR_18->pport + VAR_14))
      VAR_21++;
   if (!VAR_21)
    continue;
   for (VAR_16 = VAR_18->first_user_ctxt; VAR_16 < VAR_18->cfgctxts;
        VAR_16++)
    if (VAR_18->rcd[VAR_16])
     VAR_19++;
    else
     VAR_20++;
   if (VAR_21 && VAR_20 && VAR_19 < VAR_17) {
    VAR_7 = VAR_18;
    VAR_17 = VAR_19;
   }
  }
  if (VAR_7) {
   VAR_8 = FUNC_0(VAR_4, VAR_7, VAR_15, VAR_5);
   goto done;
  }
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
   struct qib_devdata *VAR_22 = FUNC_2(VAR_12);
   if (VAR_22) {
    VAR_8 = FUNC_0(VAR_4, VAR_22, VAR_15, VAR_5);
    if (!VAR_8)
     goto done;
    if (VAR_8 == -VAR_0)
     VAR_13++;
   }
  }
 }
 VAR_8 = VAR_13 ? -VAR_0 : -VAR_1;

done:
 return VAR_8;
}
