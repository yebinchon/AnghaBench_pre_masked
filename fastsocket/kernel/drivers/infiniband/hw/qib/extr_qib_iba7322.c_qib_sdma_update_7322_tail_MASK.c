
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qib_pportdata {int sdma_descq_tail; } ;


 int VAR_0 ;
 int FUNC_0 (struct qib_pportdata*,int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct qib_pportdata *VAR_1, u16 VAR_2)
{

 FUNC_1();
 VAR_1->sdma_descq_tail = VAR_2;
 FUNC_0(VAR_1, VAR_0, VAR_2);
}
