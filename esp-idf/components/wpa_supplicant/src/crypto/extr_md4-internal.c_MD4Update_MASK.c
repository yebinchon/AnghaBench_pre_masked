
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int count; unsigned char const* buffer; int state; } ;
typedef TYPE_1__ MD4_CTX ;


 int FUNC_0 (int ,unsigned char const*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;

__attribute__((used)) static void FUNC_2(MD4_CTX *VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;

 VAR_4 = (size_t)((VAR_1->count >> 3) & (VAR_0 - 1));
 VAR_5 = VAR_0 - VAR_4;

 VAR_1->count += (u64)VAR_3 << 3;

 if (VAR_3 >= VAR_5) {
  if (VAR_4 != 0) {
   FUNC_1(VAR_1->buffer + VAR_4, VAR_2, VAR_5);
   FUNC_0(VAR_1->state, VAR_1->buffer);
   VAR_2 += VAR_5;
   VAR_3 -= VAR_5;
   VAR_4 = 0;
  }

  while (VAR_3 >= VAR_0) {
   FUNC_0(VAR_1->state, VAR_2);
   VAR_2 += VAR_0;
   VAR_3 -= VAR_0;
  }
 }

 if (VAR_3 != 0)
  FUNC_1(VAR_1->buffer + VAR_4, VAR_2, VAR_3);
}
