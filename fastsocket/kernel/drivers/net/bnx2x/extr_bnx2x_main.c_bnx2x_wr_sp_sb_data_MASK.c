
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hc_sp_status_block_data {int dummy; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1,
  struct hc_sp_status_block_data *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < sizeof(struct hc_sp_status_block_data)/sizeof(u32); VAR_4++)
  FUNC_2(VAR_1, VAR_0 +
   FUNC_1(VAR_3) +
   VAR_4*sizeof(u32),
   *((u32 *)VAR_2 + VAR_4));
}
