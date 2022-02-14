
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct qib_pportdata {TYPE_3__* dd; TYPE_1__* cpspec; int hw_pidx; } ;
struct TYPE_7__ {TYPE_2__* cspec; } ;
struct TYPE_6__ {scalar_t__ r1; } ;
struct TYPE_5__ {int qdr_dfe_on; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int,int,int,int) ;
 int FUNC_5 (struct qib_pportdata*,int,int,int) ;
 int FUNC_6 (struct qib_pportdata*,int ) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (struct qib_pportdata*,int ,unsigned long long) ;
 int VAR_6 ;
 int FUNC_9 (struct qib_pportdata*,int) ;

__attribute__((used)) static int FUNC_10(struct qib_pportdata *VAR_7)
{
 u32 VAR_8;





 FUNC_6(VAR_7, 0);


 FUNC_8(VAR_7, VAR_5,
  FUNC_3(VAR_0,
  VAR_6));



 FUNC_5(VAR_7, 2, 0, FUNC_0(11, 9));


 FUNC_5(VAR_7, 11, (1 << 11), FUNC_0(12, 11));

 FUNC_5(VAR_7, 13, (1 << 6), (1 << 6));


 VAR_8 = FUNC_2(VAR_7->dd) ? VAR_2 : VAR_1;
 FUNC_5(VAR_7, 13, (VAR_8 << 7), FUNC_0(9, 7));


 VAR_8 = FUNC_2(VAR_7->dd) ? 0 : 1;
 FUNC_5(VAR_7, 13, (VAR_8 << 5), (1 << 5));


 FUNC_4(VAR_7->dd, FUNC_1(VAR_7->hw_pidx), 5, 10, 0 << 14, 1 << 14);


 FUNC_5(VAR_7, 5, (0 << 8), FUNC_0(9, 8));



 FUNC_4(VAR_7->dd, FUNC_1(VAR_7->hw_pidx), 5, 5, 8 << 11, FUNC_0(14, 11));
 FUNC_4(VAR_7->dd, FUNC_1(VAR_7->hw_pidx), 5, 7, 8 << 4, FUNC_0(7, 4));
 FUNC_4(VAR_7->dd, FUNC_1(VAR_7->hw_pidx), 5, 8, 8 << 11, FUNC_0(14, 11));
 FUNC_4(VAR_7->dd, FUNC_1(VAR_7->hw_pidx), 5, 10, 8 << 4, FUNC_0(7, 4));


 FUNC_4(VAR_7->dd, FUNC_1(VAR_7->hw_pidx), 5, 6, 4 << 0, FUNC_0(3, 0));
 FUNC_4(VAR_7->dd, FUNC_1(VAR_7->hw_pidx), 5, 7, 4 << 8, FUNC_0(11, 8));
 FUNC_4(VAR_7->dd, FUNC_1(VAR_7->hw_pidx), 5, 9, 4 << 0, FUNC_0(3, 0));
 FUNC_4(VAR_7->dd, FUNC_1(VAR_7->hw_pidx), 5, 10, 4 << 8, FUNC_0(11, 8));


 FUNC_4(VAR_7->dd, FUNC_1(VAR_7->hw_pidx), 5, 9, 1 << 15, 1 << 15);


 FUNC_5(VAR_7, 14, (1 << 3), FUNC_0(5, 3));
 FUNC_5(VAR_7, 20, (2 << 10), FUNC_0(12, 10));
 FUNC_5(VAR_7, 20, (4 << 13), FUNC_0(15, 13));

 FUNC_9(VAR_7, 1);


 FUNC_5(VAR_7, 9, 0 << 15, 1 << 15);


 FUNC_5(VAR_7, 16, 0 << 0, FUNC_0(1, 0));


 VAR_8 = (VAR_7->dd->cspec->r1 || FUNC_2(VAR_7->dd)) ? 0xb6c0 : 0x6bac;
 FUNC_5(VAR_7, 21, VAR_8, 0xfffe);





 FUNC_8(VAR_7, FUNC_7(0), 0ULL);
 FUNC_8(VAR_7, FUNC_7(1), 0ULL);
 FUNC_8(VAR_7, FUNC_7(2),
       VAR_7->dd->cspec->r1 ?
       VAR_4 : VAR_3);
 VAR_7->cpspec->qdr_dfe_on = 1;


 FUNC_5(VAR_7, 38, 0 << 10, 1 << 10);


 FUNC_5(VAR_7, 12, 1 << 4, 1 << 4);

 if (!VAR_7->dd->cspec->r1) {
  FUNC_5(VAR_7, 12, 1 << 12, 1 << 12);
  FUNC_5(VAR_7, 12, 2 << 8, 0x0f << 8);
 }


 FUNC_5(VAR_7, 2, 15 << 5, FUNC_0(8, 5));

 return 0;
}
