
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long num_chunks; int * mapping; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2)
{
 VAR_0 = FUNC_0(VAR_0, sizeof(u32));
 VAR_1.mapping = (u32 *)VAR_0;
 VAR_0 += VAR_2 * sizeof(u32);
 VAR_1.num_chunks = VAR_2;
}
