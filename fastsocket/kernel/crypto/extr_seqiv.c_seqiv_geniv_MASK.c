
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct seqiv_ctx {int salt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int FUNC_2 (int *,int *,unsigned int) ;
 int FUNC_3 (int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct seqiv_ctx *VAR_0, u8 *VAR_1, u64 VAR_2,
   unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_3;

 if (VAR_3 > sizeof(u64)) {
  FUNC_3(VAR_1, 0, VAR_3 - sizeof(u64));
  VAR_4 = sizeof(u64);
 }
 VAR_2 = FUNC_0(VAR_2);
 FUNC_2(VAR_1 + VAR_3 - VAR_4, &VAR_2, VAR_4);
 FUNC_1(VAR_1, VAR_0->salt, VAR_3);
}
