
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* wname; scalar_t__* test; int * pwrite; TYPE_1__* current; int * pread; } ;
typedef TYPE_2__ png_store ;
typedef int * png_const_structp ;
struct TYPE_4__ {char const* name; } ;


 size_t FUNC_0 (char*,size_t,size_t,char const*) ;
 char const* VAR_0 ;

__attribute__((used)) static size_t
FUNC_1(png_store *VAR_1, png_const_structp VAR_2, char *VAR_3, size_t VAR_4,
   size_t VAR_5, const char *VAR_6)
{
   if (VAR_2 != ((void*)0) && VAR_2 == VAR_1->pread)
   {

      VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, "read: ");

      if (VAR_1->current != ((void*)0))
      {
         VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_1->current->name);
         VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_0);
      }
   }

   else if (VAR_2 != ((void*)0) && VAR_2 == VAR_1->pwrite)
   {

      VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, "write: ");
      VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_1->wname);
      VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_0);
   }

   else
   {

      VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, "pngvalid: ");
   }

   if (VAR_1->test[0] != 0)
   {
      VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_1->test);
      VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_0);
   }
   VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
   return VAR_5;
}
