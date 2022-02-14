
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehca_sport {int ibcq_aqp1; int * ibqp_sqp; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ehca_sport *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->ibqp_sqp[VAR_0]);
 if (VAR_2) {
  FUNC_0("Cannot destroy AQP1 QP. ret=%i", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->ibcq_aqp1);
 if (VAR_2)
  FUNC_0("Cannot destroy AQP1 CQ. ret=%i", VAR_2);

 return VAR_2;
}
