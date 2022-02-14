
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bfi_fru_write_req_s {int last; int alen; int mh; int trfr_cmpl; void* length; void* offset; } ;
struct TYPE_2__ {scalar_t__ msg; } ;
struct bfa_fru_s {scalar_t__ addr_off; scalar_t__ offset; scalar_t__ residue; scalar_t__ ubuf; TYPE_1__ mb; int ioc; int dbuf_kva; int dbuf_pa; int trfr_cmpl; } ;
typedef enum bfi_fru_h2i_msgs { ____Placeholder_bfi_fru_h2i_msgs } bfi_fru_h2i_msgs ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2, enum bfi_fru_h2i_msgs VAR_3)
{
 struct bfa_fru_s *VAR_4 = VAR_2;
 struct bfi_fru_write_req_s *VAR_5 =
   (struct bfi_fru_write_req_s *) VAR_4->mb.msg;
 u32 VAR_6;

 VAR_5->offset = FUNC_4(VAR_4->addr_off + VAR_4->offset);
 VAR_6 = (VAR_4->residue < VAR_0) ?
    VAR_4->residue : VAR_0;
 VAR_5->length = FUNC_4(VAR_6);




 VAR_5->last = (VAR_6 == VAR_4->residue) ? 1 : 0;

 VAR_5->trfr_cmpl = (VAR_6 == VAR_4->residue) ? VAR_4->trfr_cmpl : 0;
 FUNC_3(VAR_5->mh, VAR_1, VAR_3, FUNC_2(VAR_4->ioc));
 FUNC_0(&VAR_5->alen, VAR_6, VAR_4->dbuf_pa);

 FUNC_5(VAR_4->dbuf_kva, VAR_4->ubuf + VAR_4->offset, VAR_6);
 FUNC_1(VAR_4->ioc, &VAR_4->mb);

 VAR_4->residue -= VAR_6;
 VAR_4->offset += VAR_6;
}
