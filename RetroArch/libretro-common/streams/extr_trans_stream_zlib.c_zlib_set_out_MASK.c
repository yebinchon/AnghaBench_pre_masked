
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int avail_out; int * next_out; } ;
struct zlib_trans_stream {TYPE_1__ z; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, uint8_t *VAR_1, uint32_t VAR_2)
{
   struct zlib_trans_stream *VAR_3 = (struct zlib_trans_stream *) VAR_0;

   if (!VAR_3)
      return;

   VAR_3->z.next_out = VAR_1;
   VAR_3->z.avail_out = VAR_2;
}
