
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int bc_ver; scalar_t__ shmem_base; } ;
struct bnx2x {TYPE_1__ common; int dev; } ;
typedef int __be32 ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (struct bnx2x*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct bnx2x*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int ,char*,int,int,int) ;
 int VAR_4 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char const*,...) ;

void FUNC_10(struct bnx2x *VAR_5, const char *VAR_6)
{
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 __be32 VAR_11[9];
 int VAR_12;
 u32 VAR_13;
 if (FUNC_1(VAR_5)) {
  FUNC_0("NO MCP - can not dump\n");
  return;
 }
 FUNC_9("%s", VAR_6);
 FUNC_7("", VAR_5->dev, "bc %d.%d.%d\n",
  (VAR_5->common.bc_ver & 0xff0000) >> 16,
  (VAR_5->common.bc_ver & 0xff00) >> 8,
  (VAR_5->common.bc_ver & 0xff));

 VAR_8 = FUNC_4(VAR_5, VAR_1);
 if (VAR_8 == FUNC_4(VAR_5, VAR_1))
  FUNC_0("%s" "MCP PC at 0x%x\n", VAR_6, VAR_8);

 if (FUNC_2(VAR_5) == 0)
  VAR_13 = VAR_5->common.shmem_base;
 else
  VAR_13 = FUNC_5(VAR_5, VAR_4);
 VAR_7 = VAR_13 - 0x800;


 VAR_9 = FUNC_4(VAR_5, VAR_7);
 if (VAR_9 != VAR_3) {
  FUNC_0("Trace buffer signature is missing.");
  return ;
 }


 VAR_7 += 4;
 VAR_9 = FUNC_4(VAR_5, VAR_7);
 VAR_9 = (FUNC_3(VAR_5) ? VAR_2 : VAR_0)
   + ((VAR_9 + 0x3) & ~0x3) - 0x08000000;
 FUNC_9("%s" "begin fw dump (mark 0x%x)\n", VAR_6, VAR_9);

 FUNC_9("%s", VAR_6);


 for (VAR_10 = VAR_9; VAR_10 <= VAR_13; VAR_10 += 0x8*4) {
  for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
   VAR_11[VAR_12] = FUNC_6(FUNC_4(VAR_5, VAR_10 + 4*VAR_12));
  VAR_11[8] = 0x0;
  FUNC_8("%s", (char *)VAR_11);
 }


 for (VAR_10 = VAR_7 + 4; VAR_10 <= VAR_9; VAR_10 += 0x8*4) {
  for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
   VAR_11[VAR_12] = FUNC_6(FUNC_4(VAR_5, VAR_10 + 4*VAR_12));
  VAR_11[8] = 0x0;
  FUNC_8("%s", (char *)VAR_11);
 }
 FUNC_9("%s" "end of fw dump\n", VAR_6);
}
