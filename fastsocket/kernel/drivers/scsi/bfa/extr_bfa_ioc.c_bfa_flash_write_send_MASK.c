
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bfi_flash_write_req_s {int last; int alen; int mh; void* length; void* offset; int instance; void* type; } ;
struct TYPE_2__ {scalar_t__ msg; } ;
struct bfa_flash_s {scalar_t__ type; scalar_t__ addr_off; scalar_t__ offset; scalar_t__ residue; scalar_t__ ubuf; TYPE_1__ mb; int ioc; int dbuf_kva; int dbuf_pa; int instance; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct bfa_flash_s *VAR_3)
{
 struct bfi_flash_write_req_s *VAR_4 =
   (struct bfi_flash_write_req_s *) VAR_3->mb.msg;
 u32 VAR_5;

 VAR_4->type = FUNC_0(VAR_3->type);
 VAR_4->instance = VAR_3->instance;
 VAR_4->offset = FUNC_0(VAR_3->addr_off + VAR_3->offset);
 VAR_5 = (VAR_3->residue < VAR_0) ?
  VAR_3->residue : VAR_0;
 VAR_4->length = FUNC_0(VAR_5);


 VAR_4->last = (VAR_5 == VAR_3->residue) ? 1 : 0;

 FUNC_4(VAR_4->mh, VAR_2, VAR_1,
   FUNC_3(VAR_3->ioc));
 FUNC_1(&VAR_4->alen, VAR_5, VAR_3->dbuf_pa);
 FUNC_5(VAR_3->dbuf_kva, VAR_3->ubuf + VAR_3->offset, VAR_5);
 FUNC_2(VAR_3->ioc, &VAR_3->mb);

 VAR_3->residue -= VAR_5;
 VAR_3->offset += VAR_5;
}
