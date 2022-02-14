
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bfi_phy_read_req_s {int alen; int mh; void* length; void* offset; int instance; } ;
struct TYPE_2__ {scalar_t__ msg; } ;
struct bfa_phy_s {scalar_t__ residue; TYPE_1__ mb; int ioc; int dbuf_pa; scalar_t__ offset; scalar_t__ addr_off; int instance; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct bfa_phy_s *VAR_4 = VAR_3;
 struct bfi_phy_read_req_s *VAR_5 =
   (struct bfi_phy_read_req_s *) VAR_4->mb.msg;
 u32 VAR_6;

 VAR_5->instance = VAR_4->instance;
 VAR_5->offset = FUNC_4(VAR_4->addr_off + VAR_4->offset);
 VAR_6 = (VAR_4->residue < VAR_0) ?
   VAR_4->residue : VAR_0;
 VAR_5->length = FUNC_4(VAR_6);
 FUNC_3(VAR_5->mh, VAR_1, VAR_2,
  FUNC_2(VAR_4->ioc));
 FUNC_0(&VAR_5->alen, VAR_6, VAR_4->dbuf_pa);
 FUNC_1(VAR_4->ioc, &VAR_4->mb);
}
