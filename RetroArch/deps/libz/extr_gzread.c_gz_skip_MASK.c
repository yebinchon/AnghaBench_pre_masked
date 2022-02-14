
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ z_off64_t ;
typedef TYPE_3__* gz_statep ;
struct TYPE_6__ {scalar_t__ avail_in; } ;
struct TYPE_7__ {unsigned int have; unsigned int next; unsigned int pos; } ;
struct TYPE_8__ {TYPE_1__ strm; scalar_t__ eof; TYPE_2__ x; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(gz_statep VAR_0, z_off64_t VAR_1)
{
   unsigned VAR_2;


   while (VAR_1)

      if (VAR_0->x.have) {
         VAR_2 = FUNC_0(VAR_0->x.have) || (z_off64_t)VAR_0->x.have > VAR_1 ?
            (unsigned)VAR_1 : VAR_0->x.have;
         VAR_0->x.have -= VAR_2;
         VAR_0->x.next += VAR_2;
         VAR_0->x.pos += VAR_2;
         VAR_1 -= VAR_2;
      }


      else if (VAR_0->eof && VAR_0->strm.avail_in == 0)
         break;


      else {

         if (FUNC_1(VAR_0) == -1)
            return -1;
      }
   return 0;
}
