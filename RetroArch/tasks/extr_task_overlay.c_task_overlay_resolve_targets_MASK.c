
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct overlay_desc {char* next_index_name; unsigned int next_index; } ;
struct overlay {unsigned int size; int * descs; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (struct overlay*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_3(struct overlay *VAR_0,
      size_t VAR_1, size_t VAR_2)
{
   unsigned VAR_3;
   struct overlay *VAR_4 = (struct overlay*)&VAR_0[VAR_1];

   for (VAR_3 = 0; VAR_3 < VAR_4->size; VAR_3++)
   {
      struct overlay_desc *VAR_5 = (struct overlay_desc*)&VAR_4->descs[VAR_3];
      const char *VAR_6 = VAR_5->next_index_name;
      ssize_t VAR_7 = (VAR_1 + 1) & VAR_2;

      if (!FUNC_1(VAR_6))
      {
         VAR_7 = FUNC_2(VAR_0, VAR_6, VAR_2);

         if (VAR_7 < 0)
         {
            FUNC_0("[Overlay]: Couldn't find overlay called: \"%s\".\n",
                  VAR_6);
            return 0;
         }
      }

      VAR_5->next_index = (unsigned)VAR_7;
   }

   return 1;
}
