
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* count; unsigned char const* buffer; int state; } ;
typedef TYPE_1__ SHA1_CTX ;


 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (unsigned char const*,unsigned char const*,int) ;

void
FUNC_3(SHA1_CTX* VAR_0, const void *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4;
 const unsigned char *VAR_5 = VAR_1;




 VAR_4 = (VAR_0->count[0] >> 3) & 63;
 if ((VAR_0->count[0] += VAR_2 << 3) < (VAR_2 << 3))
  VAR_0->count[1]++;
 VAR_0->count[1] += (VAR_2 >> 29);
 if ((VAR_4 + VAR_2) > 63) {
  FUNC_2(&VAR_0->buffer[VAR_4], VAR_5, (VAR_3 = 64-VAR_4));
  FUNC_0(VAR_0->state, VAR_0->buffer);
  for ( ; VAR_3 + 63 < VAR_2; VAR_3 += 64) {
   FUNC_0(VAR_0->state, &VAR_5[VAR_3]);
  }
  VAR_4 = 0;
 }
 else VAR_3 = 0;
 FUNC_2(&VAR_0->buffer[VAR_4], &VAR_5[VAR_3], VAR_2 - VAR_3);



}
