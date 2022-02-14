
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha256_state {int curlen; int length; unsigned char* buf; int * state; } ;


 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (struct sha256_state*,unsigned char*) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0,
                        struct sha256_state *VAR_1)
{
  int VAR_2;
  if(VAR_1->curlen >= sizeof(VAR_1->buf))
    return -1;

  VAR_1->length += VAR_1->curlen * 8;

  VAR_1->buf[VAR_1->curlen++] = (unsigned char)0x80;




  if(VAR_1->curlen > 56) {
    while(VAR_1->curlen < 64) {
      VAR_1->buf[VAR_1->curlen++] = (unsigned char)0;
    }
    FUNC_2(VAR_1, VAR_1->buf);
    VAR_1->curlen = 0;
  }

  while(VAR_1->curlen < 56) {
    VAR_1->buf[VAR_1->curlen++] = (unsigned char)0;
  }

  FUNC_1(VAR_1->buf + 56, VAR_1->length);
  FUNC_2(VAR_1, VAR_1->buf);

  for(VAR_2 = 0; VAR_2 < 8; VAR_2++)
    FUNC_0(VAR_0 + (4 * VAR_2), VAR_1->state[VAR_2]);
  return 0;
}
