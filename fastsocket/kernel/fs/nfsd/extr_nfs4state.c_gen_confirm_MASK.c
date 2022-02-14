
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ data; } ;
struct nfs4_client {TYPE_1__ cl_confirm; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct nfs4_client *VAR_0)
{
 static u32 VAR_1;
 u32 *VAR_2;

 VAR_2 = (u32 *)VAR_0->cl_confirm.data;
 *VAR_2++ = FUNC_0();
 *VAR_2++ = VAR_1++;
}
