
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardinfo {scalar_t__ csr_remap; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cardinfo *VAR_2, int VAR_3, unsigned char VAR_4)
{
 unsigned char VAR_5;

 VAR_5 = FUNC_0(VAR_2->csr_remap + VAR_1);
 if (VAR_4 == VAR_0)
  VAR_5 ^= (1<<VAR_3);
 else {
  VAR_5 &= ~(0x03 << VAR_3);
  VAR_5 |= (VAR_4 << VAR_3);
 }
 FUNC_1(VAR_5, VAR_2->csr_remap + VAR_1);

}
