
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct audmgr {int ept; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct audmgr*,void*,int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(uint32_t VAR_1, uint32_t VAR_2,
    void *VAR_3, int VAR_4, void *VAR_5)
{
 struct audmgr *VAR_6 = VAR_5;
 uint32_t *VAR_7 = VAR_3;

 if (0) {
  int VAR_8 = VAR_4 / 4;
  FUNC_2("rpc_call proc %d:", VAR_1);
  while (VAR_8--)
   FUNC_3(" %08x", FUNC_0(*VAR_7++));
  FUNC_3("\n");
 }

 if (VAR_1 == VAR_0)
  FUNC_4(VAR_6, VAR_3, VAR_4);
 else
  FUNC_1("audmgr: unknown rpc proc %d\n", VAR_1);
 FUNC_5(VAR_6->ept, VAR_2);
}
