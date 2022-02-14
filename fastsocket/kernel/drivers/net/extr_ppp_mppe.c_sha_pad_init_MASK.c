
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha_pad {int sha_pad2; int sha_pad1; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct sha_pad *VAR_0)
{
 FUNC_0(VAR_0->sha_pad1, 0x00, sizeof(VAR_0->sha_pad1));
 FUNC_0(VAR_0->sha_pad2, 0xF2, sizeof(VAR_0->sha_pad2));
}
