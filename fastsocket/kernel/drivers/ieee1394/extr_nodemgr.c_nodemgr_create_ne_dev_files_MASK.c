
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct node_entry {struct device device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_3(struct node_entry *VAR_1)
{
 struct device *VAR_2 = &VAR_1->device;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (FUNC_2(VAR_2, VAR_0[VAR_3]))
   goto fail;
 return;
fail:
 FUNC_1("Failed to add sysfs attribute");
}
