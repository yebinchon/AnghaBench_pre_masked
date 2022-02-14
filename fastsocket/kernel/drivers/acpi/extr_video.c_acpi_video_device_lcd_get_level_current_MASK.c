
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ _BCQ; scalar_t__ _BQC; } ;
struct acpi_video_device {TYPE_4__* brightness; TYPE_3__ cap; TYPE_1__* dev; } ;
typedef int acpi_status ;
struct TYPE_6__ {scalar_t__ _BCL_reversed; scalar_t__ _BQC_use_index; } ;
struct TYPE_8__ {int count; unsigned long long* levels; unsigned long long curr; TYPE_2__ flags; } ;
struct TYPE_5__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct acpi_video_device *VAR_3,
     unsigned long long *VAR_4)
{
 acpi_status VAR_5 = VAR_1;
 int VAR_6;

 if (VAR_3->cap._BQC || VAR_3->cap._BCQ) {
  char *VAR_7 = VAR_3->cap._BQC ? "_BQC" : "_BCQ";

  VAR_5 = FUNC_2(VAR_3->dev->handle, VAR_7,
      ((void*)0), VAR_4);
  if (FUNC_0(VAR_5)) {
   if (VAR_3->brightness->flags._BQC_use_index) {
    if (VAR_3->brightness->flags._BCL_reversed)
     *VAR_4 = VAR_3->brightness->count
         - 3 - (*VAR_4);
    *VAR_4 = VAR_3->brightness->levels[*VAR_4 + 2];

   }
   *VAR_4 += VAR_2;
   for (VAR_6 = 2; VAR_6 < VAR_3->brightness->count; VAR_6++)
    if (VAR_3->brightness->levels[VAR_6] == *VAR_4) {
     VAR_3->brightness->curr = *VAR_4;
     return 0;
   }

   FUNC_1((VAR_0, "%s returned an invalid level",
      VAR_7));
   VAR_3->cap._BQC = VAR_3->cap._BCQ = 0;
  } else {







   FUNC_1((VAR_0, "Evaluating %s failed", VAR_7));
   VAR_3->cap._BQC = VAR_3->cap._BCQ = 0;
  }
 }

 *VAR_4 = VAR_3->brightness->curr;
 return 0;
}
