
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int * pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
struct seq_file {struct acpi_video_device* private; } ;
struct acpi_video_device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct acpi_video_device*,union acpi_object**,int) ;
 int FUNC_2 (union acpi_object*) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (struct seq_file*,int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct acpi_video_device *VAR_3 = VAR_1->private;
 int VAR_4;
 int VAR_5;
 union acpi_object *VAR_6 = ((void*)0);


 if (!VAR_3)
  goto out;

 VAR_4 = FUNC_1(VAR_3, &VAR_6, 128);
 if (FUNC_0(VAR_4)) {
  VAR_4 = FUNC_1(VAR_3, &VAR_6, 256);
 }

 if (FUNC_0(VAR_4)) {
  goto out;
 }

 if (VAR_6 && VAR_6->type == VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_6->buffer.length; VAR_5++)
   FUNC_4(VAR_1, VAR_6->buffer.pointer[VAR_5]);
 }

      out:
 if (!VAR_6)
  FUNC_3(VAR_1, "<not supported>\n");
 else
  FUNC_2(VAR_6);

 return 0;
}
