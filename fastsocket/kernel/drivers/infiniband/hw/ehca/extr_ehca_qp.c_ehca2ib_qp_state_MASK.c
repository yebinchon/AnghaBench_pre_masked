
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef enum ehca_qp_state { ____Placeholder_ehca_qp_state } ehca_qp_state ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline enum ib_qp_state FUNC_1(enum ehca_qp_state
      VAR_8)
{
 switch (VAR_8) {
 case 132:
  return VAR_3;
 case 133:
  return VAR_2;
 case 131:
  return VAR_4;
 case 130:
  return VAR_5;
 case 129:
  return VAR_6;
 case 128:
  return VAR_7;
 case 134:
  return VAR_1;
 default:
  FUNC_0("invalid ehca_qp_state=%x", VAR_8);
  return -VAR_0;
 }
}
