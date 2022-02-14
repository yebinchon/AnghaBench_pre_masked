
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardinfo {scalar_t__ csr_remap; } ;


 scalar_t__ VAR_0 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct cardinfo *VAR_1, int VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4;

 VAR_4 = FUNC_0(VAR_1->csr_remap + VAR_0);
 if (VAR_3)
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;
 FUNC_1(VAR_4, VAR_1->csr_remap + VAR_0);

 return 0;
}
