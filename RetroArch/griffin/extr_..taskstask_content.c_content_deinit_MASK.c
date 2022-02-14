
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int size; TYPE_1__* elems; } ;
struct TYPE_4__ {char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char const*) ;
 int FUNC_1 (char*,int ,char const*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* VAR_6 ;

void FUNC_5(void)
{
   unsigned VAR_7;

   if (VAR_6)
   {
      for (VAR_7 = 0; VAR_7 < VAR_6->size; VAR_7++)
      {
         const char *VAR_8 = VAR_6->elems[VAR_7].data;

         FUNC_1("%s: %s.\n",
               FUNC_3(VAR_1), VAR_8);
         if (FUNC_2(VAR_8) != 0)
            FUNC_0("%s: %s.\n",
                  FUNC_3(VAR_0),
                  VAR_8);
      }
      FUNC_4(VAR_6);
   }

   VAR_6 = ((void*)0);
   VAR_3 = 0;
   VAR_2 = 0;
   VAR_4 = 0;
   VAR_5 = 0;
}
