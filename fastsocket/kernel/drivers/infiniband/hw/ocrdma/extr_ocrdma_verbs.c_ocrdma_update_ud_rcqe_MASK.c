
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rxlen_pkey; } ;
struct ocrdma_cqe {TYPE_1__ ud; int flags_status_srcqpn; } ;
struct ib_wc {int src_qp; int pkey_index; int byte_len; int wc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ib_wc *VAR_6, struct ocrdma_cqe *VAR_7)
{
 int VAR_8;

 VAR_8 = (FUNC_0(VAR_7->flags_status_srcqpn) &
  VAR_3) >> VAR_4;
 VAR_6->src_qp = FUNC_0(VAR_7->flags_status_srcqpn) &
      VAR_2;
 VAR_6->pkey_index = FUNC_0(VAR_7->ud.rxlen_pkey) &
      VAR_1;
 VAR_6->wc_flags = VAR_0;
 VAR_6->byte_len = (FUNC_0(VAR_7->ud.rxlen_pkey) >>
     VAR_5);
 return VAR_8;
}
