
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct src_ent {scalar_t__ next; } ;
struct bnx2x {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_3, struct src_ent *VAR_4,
         dma_addr_t VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_0(VAR_3);


 for (VAR_7 = 0; VAR_7 < VAR_6-1; VAR_7++)
  VAR_4[VAR_7].next = (u64)(VAR_5 +
        (VAR_7+1)*sizeof(struct src_ent));


 FUNC_1(VAR_3, VAR_0 + VAR_8*4, VAR_6);

 FUNC_4(VAR_3, VAR_1 + VAR_8*16,
      FUNC_3(VAR_5), FUNC_2(VAR_5));

 FUNC_4(VAR_3, VAR_2 + VAR_8*16,
      FUNC_3((u64)VAR_5 +
      (VAR_6-1) * sizeof(struct src_ent)),
      FUNC_2((u64)VAR_5 +
      (VAR_6-1) * sizeof(struct src_ent)));
}
