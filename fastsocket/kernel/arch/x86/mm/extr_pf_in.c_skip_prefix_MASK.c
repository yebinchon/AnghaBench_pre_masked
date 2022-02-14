
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prefix_bits {int shorted; int enlarged; int rexr; int rex; } ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* VAR_0 ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_1, struct prefix_bits *VAR_2)
{
 int VAR_3;
 unsigned char *VAR_4 = VAR_1;
 VAR_2->shorted = 0;
 VAR_2->enlarged = 0;
 VAR_2->rexr = 0;
 VAR_2->rex = 0;

restart:
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (*VAR_4 == VAR_0[VAR_3]) {
   if (*VAR_4 == 0x66)
    VAR_2->shorted = 1;

   if ((*VAR_4 & 0xf8) == 0x48)
    VAR_2->enlarged = 1;
   if ((*VAR_4 & 0xf4) == 0x44)
    VAR_2->rexr = 1;
   if ((*VAR_4 & 0xf0) == 0x40)
    VAR_2->rex = 1;

   VAR_4++;
   goto restart;
  }
 }

 return (VAR_4 - VAR_1);
}
