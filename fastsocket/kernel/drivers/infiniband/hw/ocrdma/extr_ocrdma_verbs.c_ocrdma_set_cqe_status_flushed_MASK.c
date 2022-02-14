
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {scalar_t__ qp_type; } ;
struct ocrdma_cqe {void* flags_status_srcqpn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ocrdma_cqe*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct ocrdma_qp *VAR_7,
      struct ocrdma_cqe *VAR_8)
{
 if (FUNC_1(VAR_8)) {
  VAR_8->flags_status_srcqpn = FUNC_0(FUNC_2(
    VAR_8->flags_status_srcqpn) &
     ~VAR_2);
  VAR_8->flags_status_srcqpn = FUNC_0(FUNC_2(
    VAR_8->flags_status_srcqpn) |
    (VAR_6 <<
     VAR_3));
 } else {
  if (VAR_7->qp_type == VAR_1 || VAR_7->qp_type == VAR_0) {
   VAR_8->flags_status_srcqpn = FUNC_0(FUNC_2(
     VAR_8->flags_status_srcqpn) &
      ~VAR_4);
   VAR_8->flags_status_srcqpn = FUNC_0(FUNC_2(
     VAR_8->flags_status_srcqpn) |
     (VAR_6 <<
      VAR_5));
  } else {
   VAR_8->flags_status_srcqpn = FUNC_0(FUNC_2(
     VAR_8->flags_status_srcqpn) &
      ~VAR_2);
   VAR_8->flags_status_srcqpn = FUNC_0(FUNC_2(
     VAR_8->flags_status_srcqpn) |
     (VAR_6 <<
      VAR_3));
  }
 }
}
