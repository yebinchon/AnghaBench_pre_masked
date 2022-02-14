
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct acpi_handle_list {size_t count; int * handles; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(struct acpi_handle_list *VAR_3, int *VAR_4)
{
 int VAR_5 = 0, VAR_6;
 u32 VAR_7 = 0;


 if (!VAR_3 || !VAR_4)
  return -VAR_2;




 for (VAR_7 = 0; VAR_7 < VAR_3->count; VAR_7++) {





  VAR_5 = FUNC_1(VAR_3->handles[VAR_7], &VAR_6);
  if (VAR_5)
   return VAR_5;

  *VAR_4 = VAR_6;

  if (*VAR_4 != VAR_1)
   break;
 }

 FUNC_0((VAR_0, "Resource list is %s\n",
     *VAR_4 ? "on" : "off"));

 return VAR_5;
}
