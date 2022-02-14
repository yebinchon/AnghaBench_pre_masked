
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {scalar_t__ user_data; } ;
struct qcm {int scratch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qcm*) ;
 int FUNC_2 (struct qcm*) ;

__attribute__((used)) static void FUNC_3(struct uvd *VAR_0)
{
 struct qcm *VAR_1 = (struct qcm *) VAR_0->user_data;

 FUNC_0(VAR_1->scratch);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
