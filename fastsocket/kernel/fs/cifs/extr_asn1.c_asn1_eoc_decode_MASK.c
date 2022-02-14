
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_ctx {unsigned char* pointer; void* error; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct asn1_ctx*,unsigned char*) ;

__attribute__((used)) static unsigned char
FUNC_1(struct asn1_ctx *VAR_2, unsigned char *VAR_3)
{
 unsigned char VAR_4;

 if (VAR_3 == ((void*)0)) {
  if (!FUNC_0(VAR_2, &VAR_4))
   return 0;

  if (VAR_4 != 0x00) {
   VAR_2->error = VAR_0;
   return 0;
  }

  if (!FUNC_0(VAR_2, &VAR_4))
   return 0;

  if (VAR_4 != 0x00) {
   VAR_2->error = VAR_0;
   return 0;
  }
  return 1;
 } else {
  if (VAR_2->pointer != VAR_3) {
   VAR_2->error = VAR_1;
   return 0;
  }
  return 1;
 }
}
