
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* bytes; int * in; int buf; } ;
typedef unsigned int FLAC__uint32 ;
typedef int FLAC__byte ;
typedef TYPE_1__ FLAC__MD5Context ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(FLAC__MD5Context *VAR_0, FLAC__byte const *VAR_1, unsigned VAR_2)
{
 FLAC__uint32 VAR_3;



 VAR_3 = VAR_0->bytes[0];
 if ((VAR_0->bytes[0] = VAR_3 + VAR_2) < VAR_3)
  VAR_0->bytes[1]++;

 VAR_3 = 64 - (VAR_3 & 0x3f);
 if (VAR_3 > VAR_2) {
  FUNC_2((FLAC__byte *)VAR_0->in + 64 - VAR_3, VAR_1, VAR_2);
  return;
 }

 FUNC_2((FLAC__byte *)VAR_0->in + 64 - VAR_3, VAR_1, VAR_3);
 FUNC_1(VAR_0->in);
 FUNC_0(VAR_0->buf, VAR_0->in);
 VAR_1 += VAR_3;
 VAR_2 -= VAR_3;


 while (VAR_2 >= 64) {
  FUNC_2(VAR_0->in, VAR_1, 64);
  FUNC_1(VAR_0->in);
  FUNC_0(VAR_0->buf, VAR_0->in);
  VAR_1 += 64;
  VAR_2 -= 64;
 }


 FUNC_2(VAR_0->in, VAR_1, VAR_2);
}
