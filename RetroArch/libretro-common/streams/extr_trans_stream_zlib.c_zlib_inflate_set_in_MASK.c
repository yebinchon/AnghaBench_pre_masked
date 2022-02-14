
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int avail_in; int * next_in; } ;
struct zlib_trans_stream {int inited; int ex; TYPE_1__ z; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const uint8_t *VAR_1, uint32_t VAR_2)
{
   struct zlib_trans_stream *VAR_3 = (struct zlib_trans_stream *) VAR_0;

   if (!VAR_3)
      return;

   VAR_3->z.next_in = (uint8_t *) VAR_1;
   VAR_3->z.avail_in = VAR_2;
   if (!VAR_3->inited)
   {
      FUNC_0(&VAR_3->z, VAR_3->ex);
      VAR_3->inited = 1;
   }
}
