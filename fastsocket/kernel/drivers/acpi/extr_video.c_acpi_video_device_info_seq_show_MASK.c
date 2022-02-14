
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* u32 ;
struct seq_file {struct acpi_video_device* private; } ;
struct TYPE_2__ {scalar_t__ bios; scalar_t__ dvi; scalar_t__ tvout; scalar_t__ lcd; scalar_t__ crt; } ;
struct acpi_video_device {TYPE_1__ flags; scalar_t__ device_id; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct acpi_video_device *VAR_2 = VAR_0->private;


 if (!VAR_2)
  goto end;

 FUNC_0(VAR_0, "device_id:    0x%04x\n", (u32) VAR_2->device_id);
 FUNC_0(VAR_0, "type:         ");
 if (VAR_2->flags.crt)
  FUNC_0(VAR_0, "CRT\n");
 else if (VAR_2->flags.lcd)
  FUNC_0(VAR_0, "LCD\n");
 else if (VAR_2->flags.tvout)
  FUNC_0(VAR_0, "TVOUT\n");
 else if (VAR_2->flags.dvi)
  FUNC_0(VAR_0, "DVI\n");
 else
  FUNC_0(VAR_0, "UNKNOWN\n");

 FUNC_0(VAR_0, "known by bios: %s\n", VAR_2->flags.bios ? "yes" : "no");

      end:
 return 0;
}
