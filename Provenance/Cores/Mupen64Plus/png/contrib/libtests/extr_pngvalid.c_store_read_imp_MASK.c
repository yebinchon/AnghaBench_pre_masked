
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t readpos; int pread; TYPE_1__* next; int * current; } ;
typedef TYPE_2__ png_store ;
typedef scalar_t__ png_size_t ;
typedef size_t png_bytep ;
struct TYPE_6__ {size_t buffer; } ;


 int FUNC_0 (size_t,size_t,size_t) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 size_t FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(png_store *VAR_0, png_bytep VAR_1, png_size_t VAR_2)
{
   if (VAR_0->current == ((void*)0) || VAR_0->next == ((void*)0))
      FUNC_1(VAR_0->pread, "store state damaged");

   while (VAR_2 > 0)
   {
      size_t VAR_3 = FUNC_3(VAR_0) - VAR_0->readpos;

      if (VAR_3 > 0)
      {
         if (VAR_3 > VAR_2) VAR_3 = VAR_2;
         FUNC_0(VAR_1, VAR_0->next->buffer + VAR_0->readpos, VAR_3);
         VAR_2 -= VAR_3;
         VAR_1 += VAR_3;
         VAR_0->readpos += VAR_3;
      }

      else if (!FUNC_2(VAR_0))
         FUNC_1(VAR_0->pread, "read beyond end of file");
   }
}
