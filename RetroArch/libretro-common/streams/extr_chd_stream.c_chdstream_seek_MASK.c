
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int offset; int track_end; } ;
typedef TYPE_1__ chdstream_t ;






int64_t FUNC_0(chdstream_t *VAR_0, int64_t VAR_1, int VAR_2)
{
   int64_t VAR_3;

   switch (VAR_2)
   {
      case 128:
         VAR_3 = VAR_1;
         break;
      case 130:
         VAR_3 = VAR_0->offset + VAR_1;
         break;
      case 129:
         VAR_3 = VAR_0->track_end + VAR_1;
         break;
      default:
         return -1;
   }

   if (VAR_3 < 0)
      return -1;

   if (VAR_3 > VAR_0->track_end)
      VAR_3 = VAR_0->track_end;

   VAR_0->offset = VAR_3;
   return 0;
}
