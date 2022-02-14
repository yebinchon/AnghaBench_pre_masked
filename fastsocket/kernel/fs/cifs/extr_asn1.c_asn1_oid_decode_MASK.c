
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_ctx {unsigned char* pointer; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct asn1_ctx*,unsigned long*) ;
 int FUNC_1 (unsigned long*) ;
 unsigned long* FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int
FUNC_3(struct asn1_ctx *VAR_3,
  unsigned char *VAR_4, unsigned long **VAR_5, unsigned int *VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;
 unsigned long *VAR_9;

 VAR_8 = VAR_4 - VAR_3->pointer + 1;


 if (VAR_8 < 2 || VAR_8 > VAR_2/sizeof(unsigned long))
  return 0;

 *VAR_5 = FUNC_2(VAR_8 * sizeof(unsigned long), VAR_1);
 if (*VAR_5 == ((void*)0))
  return 0;

 VAR_9 = *VAR_5;

 if (!FUNC_0(VAR_3, &VAR_7)) {
  FUNC_1(*VAR_5);
  *VAR_5 = ((void*)0);
  return 0;
 }

 if (VAR_7 < 40) {
  VAR_9[0] = 0;
  VAR_9[1] = VAR_7;
 } else if (VAR_7 < 80) {
  VAR_9[0] = 1;
  VAR_9[1] = VAR_7 - 40;
 } else {
  VAR_9[0] = 2;
  VAR_9[1] = VAR_7 - 80;
 }

 *VAR_6 = 2;
 VAR_9 += 2;

 while (VAR_3->pointer < VAR_4) {
  if (++(*VAR_6) > VAR_8) {
   VAR_3->error = VAR_0;
   FUNC_1(*VAR_5);
   *VAR_5 = ((void*)0);
   return 0;
  }

  if (!FUNC_0(VAR_3, VAR_9++)) {
   FUNC_1(*VAR_5);
   *VAR_5 = ((void*)0);
   return 0;
  }
 }
 return 1;
}
