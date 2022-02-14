
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct nouveau_mxm {int dummy; } ;


 int FUNC_0 (struct nouveau_mxm*,char*,int) ;

__attribute__((used)) static bool
FUNC_1(struct nouveau_mxm *VAR_0, u8 *VAR_1, void *VAR_2)
{
 u64 VAR_3 = *(u64 *)VAR_1;
 if ((VAR_3 & 0xf0) != 0xf0)
 FUNC_0(VAR_0, "unmatched output device 0x%016llx\n", VAR_3);
 return 1;
}
