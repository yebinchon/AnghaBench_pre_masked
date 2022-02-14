
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr*,int ) ;

__attribute__((used)) static int FUNC_2(struct ib_qp *VAR_2)
{
 struct ib_qp_attr VAR_3;

 FUNC_0(VAR_2 == ((void*)0));
 VAR_3.qp_state = VAR_0;
 return FUNC_1(VAR_2, &VAR_3, VAR_1);
}
