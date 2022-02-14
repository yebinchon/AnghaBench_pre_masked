
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT4 ;
struct TYPE_3__ {int* count; unsigned char* buffer; int state; } ;
typedef int POINTER ;
typedef TYPE_1__ MD4_CTX ;


 int FUNC_0 (int ,unsigned char*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

void FUNC_2 (MD4_CTX *VAR_0, unsigned char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;


 VAR_4 = (unsigned int)((VAR_0->count[0] >> 3) & 0x3F);


 if ((VAR_0->count[0] += ((UINT4)VAR_2 << 3))< ((UINT4)VAR_2 << 3))
  VAR_0->count[1]++;

 VAR_0->count[1] += ((UINT4)VAR_2 >> 29);

 VAR_5 = 64 - VAR_4;


 if (VAR_2 >= VAR_5)
 {
   FUNC_1((POINTER)&VAR_0->buffer[VAR_4], (POINTER)VAR_1, VAR_5);
   FUNC_0 (VAR_0->state, VAR_0->buffer);

   for (VAR_3 = VAR_5; VAR_3 + 63 < VAR_2; VAR_3 += 64)
    FUNC_0 (VAR_0->state, &VAR_1[VAR_3]);

   VAR_4 = 0;
 }
 else
   VAR_3 = 0;


 FUNC_1 ((POINTER)&VAR_0->buffer[VAR_4], (POINTER)&VAR_1[VAR_3], VAR_2-VAR_3);
}
