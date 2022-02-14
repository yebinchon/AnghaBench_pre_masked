
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_ioim_abort_req_s {int mh; scalar_t__ abort_tag; int io_tag; } ;
struct bfa_ioim_s {int reqq; int bfa; scalar_t__ abort_tag; int iotag; TYPE_1__* iosp; } ;
typedef enum bfi_ioim_h2i { ____Placeholder_bfi_ioim_h2i } bfi_ioim_h2i ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {scalar_t__ abort_explicit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct bfi_ioim_abort_req_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_5(struct bfa_ioim_s *VAR_5)
{
 struct bfi_ioim_abort_req_s *VAR_6;
 enum bfi_ioim_h2i VAR_7;




 VAR_6 = FUNC_1(VAR_5->bfa, VAR_5->reqq);
 if (!VAR_6)
  return VAR_0;




 if (VAR_5->iosp->abort_explicit)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_3;

 FUNC_3(VAR_6->mh, VAR_4, VAR_7, FUNC_0(VAR_5->bfa));
 VAR_6->io_tag = FUNC_4(VAR_5->iotag);
 VAR_6->abort_tag = ++VAR_5->abort_tag;




 FUNC_2(VAR_5->bfa, VAR_5->reqq, VAR_6->mh);
 return VAR_1;
}
