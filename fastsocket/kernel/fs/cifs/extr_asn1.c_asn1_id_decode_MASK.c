
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_ctx {int dummy; } ;


 int FUNC_0 (struct asn1_ctx*,unsigned char*) ;
 int FUNC_1 (struct asn1_ctx*,unsigned int*) ;

__attribute__((used)) static unsigned char
FUNC_2(struct asn1_ctx *VAR_0,
        unsigned int *VAR_1, unsigned int *VAR_2, unsigned int *VAR_3)
{
 unsigned char VAR_4;

 if (!FUNC_0(VAR_0, &VAR_4))
  return 0;

 *VAR_1 = (VAR_4 & 0xC0) >> 6;
 *VAR_2 = (VAR_4 & 0x20) >> 5;
 *VAR_3 = (VAR_4 & 0x1F);

 if (*VAR_3 == 0x1F) {
  if (!FUNC_1(VAR_0, VAR_3))
   return 0;
 }
 return 1;
}
