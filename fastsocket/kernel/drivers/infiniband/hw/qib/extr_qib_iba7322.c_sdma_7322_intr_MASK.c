
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_pportdata {int dummy; } ;
struct qib_devdata {struct qib_pportdata* pport; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct qib_pportdata*) ;
 int FUNC_3 (struct qib_pportdata*,int ) ;

__attribute__((used)) static void FUNC_4(struct qib_devdata *VAR_5, u64 VAR_6)
{
 struct qib_pportdata *VAR_7 = &VAR_5->pport[0];
 struct qib_pportdata *VAR_8 = &VAR_5->pport[1];
 u64 VAR_9 = VAR_6 & (FUNC_0(VAR_0, 0) |
  FUNC_0(VAR_2, 0) | FUNC_0(VAR_3, 0));
 u64 VAR_10 = VAR_6 & (FUNC_0(VAR_0, 1) |
  FUNC_0(VAR_2, 1) | FUNC_0(VAR_3, 1));

 if (VAR_9)
  FUNC_2(VAR_7);
 if (VAR_10)
  FUNC_2(VAR_8);

 if (VAR_6 & FUNC_1(VAR_1, 0))
  FUNC_3(VAR_7, VAR_4);
 if (VAR_6 & FUNC_1(VAR_1, 1))
  FUNC_3(VAR_8, VAR_4);
}
