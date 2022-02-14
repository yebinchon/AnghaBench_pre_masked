
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct unit_directory {int flags; scalar_t__ model_name_kv; scalar_t__ vendor_name_kv; struct device device; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct device*,int *) ;
 int ** VAR_10 ;

__attribute__((used)) static void FUNC_3(struct unit_directory *VAR_11)
{
 struct device *VAR_12 = &VAR_11->device;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_10); VAR_13++)
  if (FUNC_2(VAR_12, VAR_10[VAR_13]))
   goto fail;
 if (VAR_11->flags & VAR_1)
  if (FUNC_2(VAR_12, &VAR_6))
   goto fail;
 if (VAR_11->flags & VAR_3)
  if (FUNC_2(VAR_12, &VAR_9))
   goto fail;
 if (VAR_11->flags & VAR_2) {
  if (FUNC_2(VAR_12, &VAR_7))
   goto fail;
  if (VAR_11->vendor_name_kv &&
      FUNC_2(VAR_12, &VAR_8))
   goto fail;
 }
 if (VAR_11->flags & VAR_0) {
  if (FUNC_2(VAR_12, &VAR_4))
   goto fail;
  if (VAR_11->model_name_kv &&
      FUNC_2(VAR_12, &VAR_5))
   goto fail;
 }
 return;
fail:
 FUNC_1("Failed to add sysfs attribute");
}
