
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct txdds_ent {int amp; int main; int pre; int post; } ;
struct qib_pportdata {struct qib_devdata* dd; scalar_t__ hw_pidx; } ;
struct qib_devdata {int palign; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct qib_devdata*,int,int) ;

__attribute__((used)) static void FUNC_2(struct qib_pportdata *VAR_6, int VAR_7,
        const struct txdds_ent *VAR_8)
{
 struct qib_devdata *VAR_9 = VAR_6->dd;
 u32 VAR_10;
 int VAR_11;


 VAR_11 = FUNC_0(VAR_4) + VAR_7;





 if (VAR_6->hw_pidx)
  VAR_11 += (VAR_9->palign / sizeof(u64));

 VAR_10 = VAR_8->amp << VAR_0;
 VAR_10 |= VAR_8->main << VAR_1;
 VAR_10 |= VAR_8->pre << VAR_3;
 VAR_10 |= VAR_8->post << VAR_2;
 FUNC_1(VAR_9, VAR_11, VAR_10);

 FUNC_1(VAR_6->dd, VAR_5, 0);
}
