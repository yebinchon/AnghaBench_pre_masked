
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_chan {int dummy; } ;


 int FUNC_0 (struct mv_xor_chan*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static char FUNC_2(struct mv_xor_chan *VAR_0)
{
 u32 VAR_1 = FUNC_1(FUNC_0(VAR_0));

 VAR_1 = (VAR_1 >> 4) & 0x3;

 return (VAR_1 == 1) ? 1 : 0;
}
