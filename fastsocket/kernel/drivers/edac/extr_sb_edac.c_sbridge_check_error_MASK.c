
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbridge_pvt {unsigned int mce_out; unsigned int mce_in; struct mce* mce_outentry; scalar_t__ mce_overrun; int * mce_entry; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;
struct mce {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct mce*,int *,int) ;
 int FUNC_1 (struct mem_ctl_info*,struct mce*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_2)
{
 struct sbridge_pvt *VAR_3 = VAR_2->pvt_info;
 int VAR_4;
 unsigned VAR_5 = 0;
 struct mce *VAR_6;






 FUNC_3();
 VAR_5 = (VAR_3->mce_out + VAR_1 - VAR_3->mce_in)
  % VAR_1;
 if (!VAR_5)
  return;

 VAR_6 = VAR_3->mce_outentry;
 if (VAR_3->mce_in + VAR_5 > VAR_1) {
  unsigned VAR_7 = VAR_1 - VAR_3->mce_in;

  FUNC_0(VAR_6, &VAR_3->mce_entry[VAR_3->mce_in], sizeof(*VAR_6) * VAR_7);
  FUNC_4();
  VAR_3->mce_in = 0;
  VAR_5 -= VAR_7;
  VAR_6 += VAR_7;
 }
 FUNC_0(VAR_6, &VAR_3->mce_entry[VAR_3->mce_in], sizeof(*VAR_6) * VAR_5);
 FUNC_4();
 VAR_3->mce_in += VAR_5;

 FUNC_3();
 if (VAR_3->mce_overrun) {
  FUNC_2(VAR_0, "Lost %d memory errors\n",
         VAR_3->mce_overrun);
  FUNC_4();
  VAR_3->mce_overrun = 0;
 }




 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_1(VAR_2, &VAR_3->mce_outentry[VAR_4]);
}
