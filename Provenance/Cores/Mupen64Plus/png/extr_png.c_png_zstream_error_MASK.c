
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* png_structrp ;
struct TYPE_4__ {int * msg; } ;
struct TYPE_5__ {TYPE_1__ zstream; } ;


 void* FUNC_0 (char*) ;
void
FUNC_1(png_structrp VAR_0, int VAR_1)
{




   if (VAR_0->zstream.msg == ((void*)0)) switch (VAR_1)
   {
      default:
      case 131:
         VAR_0->zstream.msg = FUNC_0("unexpected zlib return code");
         break;

      case 130:

         VAR_0->zstream.msg = FUNC_0("unexpected end of LZ stream");
         break;

      case 132:



         VAR_0->zstream.msg = FUNC_0("missing LZ dictionary");
         break;

      case 134:

         VAR_0->zstream.msg = FUNC_0("zlib IO error");
         break;

      case 129:

         VAR_0->zstream.msg = FUNC_0("bad parameters to zlib");
         break;

      case 135:
         VAR_0->zstream.msg = FUNC_0("damaged LZ stream");
         break;

      case 133:
         VAR_0->zstream.msg = FUNC_0("insufficient memory");
         break;

      case 136:



         VAR_0->zstream.msg = FUNC_0("truncated");
         break;

      case 128:
         VAR_0->zstream.msg = FUNC_0("unsupported zlib version");
         break;

      case 137:





         VAR_0->zstream.msg = FUNC_0("unexpected zlib return");
         break;
   }
}
