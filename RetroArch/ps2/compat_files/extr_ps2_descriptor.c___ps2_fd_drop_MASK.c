
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ref_count; int current_folder_position; int FileEntry; } ;
typedef TYPE_1__ DescriptorTranslation ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_4(DescriptorTranslation *VAR_0)
{
   FUNC_0();

   if (VAR_0->ref_count == 1)
   {
      VAR_0->ref_count--;
      VAR_0->current_folder_position = -1;
      FUNC_2(VAR_0->FileEntry);
      FUNC_3(VAR_0, 0, sizeof(DescriptorTranslation));
   }
   else
   {
      VAR_0->ref_count--;
   }

   FUNC_1();
   return 0;
}
