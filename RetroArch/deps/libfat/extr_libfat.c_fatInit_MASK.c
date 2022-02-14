
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {char* name; int * (* getInterface ) () ;} ;
struct TYPE_3__ {scalar_t__ argvMagic; int argc; char** argv; } ;
typedef int DISC_INTERFACE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int const*,int ,int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ) ;
 char* FUNC_6 (char*,char) ;
 int * FUNC_7 () ;

bool FUNC_8 (uint32_t VAR_5, bool VAR_6)
{
 int VAR_7;
 int VAR_8 = -1;
 const DISC_INTERFACE *VAR_9;

 for (VAR_7 = 0;
  VAR_3[VAR_7].name != ((void*)0) && VAR_3[VAR_7].getInterface != ((void*)0);
  VAR_7++)
 {
  VAR_9 = VAR_3[VAR_7].getInterface();
  if (!VAR_9)
   continue;

      if (FUNC_1 (VAR_3[VAR_7].name, VAR_9, 0, VAR_5, VAR_1))
      {

         if (VAR_8 < 0)
            VAR_8 = VAR_7;
      }
 }


 if (VAR_8 < 0)
  return 0;

 if (VAR_6)
   {
      char VAR_10[VAR_2];
      FUNC_3 (VAR_10, VAR_3[VAR_8].name);
      FUNC_2 (VAR_10, ":/");
      FUNC_0 (VAR_10);
   }

 return 1;
}
