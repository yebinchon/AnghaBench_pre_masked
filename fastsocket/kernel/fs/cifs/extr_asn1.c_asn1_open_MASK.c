
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_ctx {unsigned char* begin; unsigned char* end; unsigned char* pointer; int error; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct asn1_ctx *VAR_1, unsigned char *VAR_2, unsigned int VAR_3)
{
 VAR_1->begin = VAR_2;
 VAR_1->end = VAR_2 + VAR_3;
 VAR_1->pointer = VAR_2;
 VAR_1->error = VAR_0;
}
