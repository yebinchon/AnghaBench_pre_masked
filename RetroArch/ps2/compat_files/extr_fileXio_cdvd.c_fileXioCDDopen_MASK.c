
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FileEntry; int items; scalar_t__ current_folder_position; } ;
typedef TYPE_1__ DescriptorTranslation ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int FUNC_4(const char *VAR_0)
{
   int VAR_1 = -1;
   if (FUNC_3()){
      VAR_1 = FUNC_0();
      DescriptorTranslation *VAR_2 = FUNC_1(VAR_1);
      VAR_2->current_folder_position = 0;
      VAR_2->items = FUNC_2(VAR_0, VAR_2->FileEntry);
   }
   return VAR_1;
}
