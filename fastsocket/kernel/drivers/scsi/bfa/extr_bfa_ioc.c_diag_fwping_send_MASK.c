
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bfi_diag_fwping_req_s {int data; int mh; int count; int alen; } ;
struct TYPE_4__ {scalar_t__ msg; } ;
struct TYPE_3__ {int data; TYPE_2__ mbcmd; int count; int dbuf_pa; scalar_t__ dbuf_kva; } ;
struct bfa_diag_s {TYPE_1__ fwping; int ioc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bfa_diag_s*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct bfa_diag_s *VAR_3)
{
 struct bfi_diag_fwping_req_s *VAR_4;
 u32 VAR_5;

 FUNC_3(VAR_3, VAR_3->fwping.dbuf_pa);


 for (VAR_5 = 0; VAR_5 < (VAR_0 >> 2); VAR_5++)
  *((u32 *)VAR_3->fwping.dbuf_kva + VAR_5) = VAR_3->fwping.data;


 VAR_4 = (struct bfi_diag_fwping_req_s *)VAR_3->fwping.mbcmd.msg;


 FUNC_0(&VAR_4->alen, VAR_0,
   VAR_3->fwping.dbuf_pa);

 VAR_4->count = FUNC_5(VAR_3->fwping.count);

 VAR_4->data = VAR_3->fwping.data;


 FUNC_4(VAR_4->mh, VAR_2, VAR_1,
  FUNC_2(VAR_3->ioc));


 FUNC_1(VAR_3->ioc, &VAR_3->fwping.mbcmd);
}
