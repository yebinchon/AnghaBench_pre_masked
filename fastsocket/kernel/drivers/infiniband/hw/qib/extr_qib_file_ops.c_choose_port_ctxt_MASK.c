
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_user_info {int dummy; } ;
struct qib_pportdata {int dummy; } ;
struct qib_devdata {int first_user_ctxt; int cfgctxts; int num_pports; struct qib_pportdata* pport; scalar_t__* rcd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qib_pportdata*,int,struct file*,struct qib_user_info const*) ;
 scalar_t__ FUNC_1 (struct qib_pportdata*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, struct qib_devdata *VAR_3, u32 VAR_4,
       const struct qib_user_info *VAR_5)
{
 struct qib_pportdata *VAR_6 = ((void*)0);
 int VAR_7, VAR_8;

 if (VAR_4) {
  if (!FUNC_1(VAR_3->pport + VAR_4 - 1)) {
   VAR_7 = -VAR_1;
   goto done;
  } else
   VAR_6 = VAR_3->pport + VAR_4 - 1;
 }
 for (VAR_8 = VAR_3->first_user_ctxt; VAR_8 < VAR_3->cfgctxts && VAR_3->rcd[VAR_8];
      VAR_8++)
  ;
 if (VAR_8 == VAR_3->cfgctxts) {
  VAR_7 = -VAR_0;
  goto done;
 }
 if (!VAR_6) {
  u32 VAR_9 = VAR_8 % VAR_3->num_pports;
  if (FUNC_1(VAR_3->pport + VAR_9))
   VAR_6 = VAR_3->pport + VAR_9;
  else {
   for (VAR_9 = 0; VAR_9 < VAR_3->num_pports && !VAR_6;
        VAR_9++)
    if (FUNC_1(VAR_3->pport + VAR_9))
     VAR_6 = VAR_3->pport + VAR_9;
  }
 }
 VAR_7 = VAR_6 ? FUNC_0(VAR_6, VAR_8, VAR_2, VAR_5) : -VAR_1;
done:
 return VAR_7;
}
