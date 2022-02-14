
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * opaque; int message; scalar_t__ warning_or_error; } ;
struct TYPE_4__ {char* file_name; TYPE_2__ image; } ;
typedef TYPE_1__ Image ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(Image *VAR_2, const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
   FUNC_0(VAR_1);
   if (VAR_2->image.warning_or_error)
      FUNC_1(VAR_0, "%s%s%s: %d\n", VAR_3, VAR_4, VAR_5, VAR_2->image.message);

   else
      FUNC_1(VAR_0, "%s%s%s\n", VAR_3, VAR_4, VAR_5);

   if (VAR_2->image.opaque != ((void*)0))
   {
      FUNC_1(VAR_0, "%s: image opaque pointer non-NULL on error\n",
         VAR_2->file_name);
      FUNC_2(&VAR_2->image);
   }

   return 0;
}
