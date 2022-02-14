
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct bfi_phy_write_req_s {int last; int alen; int mh; void* length; void* offset; int instance; } ;
struct TYPE_2__ {scalar_t__ msg; } ;
struct bfa_phy_s {int addr_off; int offset; scalar_t__ residue; int ubuf; TYPE_1__ mb; int ioc; scalar_t__ dbuf_kva; int dbuf_pa; int instance; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct bfa_phy_s *VAR_4 = VAR_3;
 struct bfi_phy_write_req_s *VAR_5 =
   (struct bfi_phy_write_req_s *) VAR_4->mb.msg;
 u32 VAR_6;
 u16 *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 VAR_5->instance = VAR_4->instance;
 VAR_5->offset = FUNC_5(VAR_4->addr_off + VAR_4->offset);
 VAR_6 = (VAR_4->residue < VAR_0) ?
   VAR_4->residue : VAR_0;
 VAR_5->length = FUNC_5(VAR_6);


 VAR_5->last = (VAR_6 == VAR_4->residue) ? 1 : 0;

 FUNC_3(VAR_5->mh, VAR_1, VAR_2,
  FUNC_2(VAR_4->ioc));
 FUNC_0(&VAR_5->alen, VAR_6, VAR_4->dbuf_pa);

 VAR_7 = (u16 *) (VAR_4->ubuf + VAR_4->offset);
 VAR_8 = (u16 *)VAR_4->dbuf_kva;
 VAR_10 = VAR_6 >> 1;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  VAR_7[VAR_9] = FUNC_4(VAR_8[VAR_9]);

 FUNC_1(VAR_4->ioc, &VAR_4->mb);

 VAR_4->residue -= VAR_6;
 VAR_4->offset += VAR_6;
}
