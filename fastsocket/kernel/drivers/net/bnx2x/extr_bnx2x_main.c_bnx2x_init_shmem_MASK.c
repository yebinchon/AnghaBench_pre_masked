
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ shmem_base; } ;
struct bnx2x {TYPE_1__ common; } ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct bnx2x*) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8 = 0;

 do {
  VAR_6->common.shmem_base = FUNC_2(VAR_6, VAR_3);
  if (VAR_6->common.shmem_base) {
   VAR_8 = FUNC_3(VAR_6, VAR_5[FUNC_1(VAR_6)]);
   if (VAR_8 & VAR_4)
    return 0;
  }

  FUNC_4(VAR_6);

 } while (VAR_7++ < (VAR_2 / VAR_1));

 FUNC_0("BAD MCP validity signature\n");

 return -VAR_0;
}
