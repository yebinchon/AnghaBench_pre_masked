
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_chan {int idx; } ;


 int FUNC_0 (struct mv_xor_chan*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct mv_xor_chan *VAR_0)
{
 u32 VAR_1 = 0xFFFF0000 >> (VAR_0->idx * 16);
 FUNC_1(VAR_1, FUNC_0(VAR_0));
}
