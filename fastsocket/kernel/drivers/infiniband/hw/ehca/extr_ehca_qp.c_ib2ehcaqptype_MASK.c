
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
typedef enum ehca_qp_type { ____Placeholder_ehca_qp_type } ehca_qp_type ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline enum ehca_qp_type FUNC_1(enum ib_qp_type VAR_5)
{
 switch (VAR_5) {
 case 130:
 case 132:
  return VAR_2;
 case 131:
  return VAR_1;
 case 129:
  return VAR_3;
 case 128:
  return VAR_4;
 default:
  FUNC_0("Invalid ibqptype=%x", VAR_5);
  return -VAR_0;
 }
}
