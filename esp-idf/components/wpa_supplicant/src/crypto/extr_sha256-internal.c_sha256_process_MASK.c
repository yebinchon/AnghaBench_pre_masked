
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha256_state {int curlen; unsigned long length; unsigned char* buf; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned long) ;
 scalar_t__ FUNC_2 (struct sha256_state*,unsigned char*) ;

__attribute__((used)) static int
FUNC_3(struct sha256_state *VAR_1, const unsigned char *VAR_2,
     unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (VAR_1->curlen >= sizeof(VAR_1->buf))
  return -1;

 while (VAR_3 > 0) {
  if (VAR_1->curlen == 0 && VAR_3 >= VAR_0) {
   if (FUNC_2(VAR_1, (unsigned char *) VAR_2) < 0)
    return -1;
   VAR_1->length += VAR_0 * 8;
   VAR_2 += VAR_0;
   VAR_3 -= VAR_0;
  } else {
   VAR_4 = FUNC_0(VAR_3, (VAR_0 - VAR_1->curlen));
   FUNC_1(VAR_1->buf + VAR_1->curlen, VAR_2, VAR_4);
   VAR_1->curlen += VAR_4;
   VAR_2 += VAR_4;
   VAR_3 -= VAR_4;
   if (VAR_1->curlen == VAR_0) {
    if (FUNC_2(VAR_1, VAR_1->buf) < 0)
     return -1;
    VAR_1->length += 8 * VAR_0;
    VAR_1->curlen = 0;
   }
  }
 }

 return 0;
}
