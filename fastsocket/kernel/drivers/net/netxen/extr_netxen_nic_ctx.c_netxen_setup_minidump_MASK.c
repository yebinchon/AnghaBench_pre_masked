
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct netxen_minidump_template_hdr {int dummy; } ;
struct TYPE_4__ {int fw_supports_md; int md_template_size; int * md_template; scalar_t__ md_enabled; int * md_capture_buff; int md_capture_mask; } ;
struct netxen_adapter {TYPE_2__ mdump; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct netxen_adapter*) ;
 int FUNC_6 (struct netxen_adapter*) ;
 int FUNC_7 (struct netxen_adapter*) ;

int
FUNC_8(struct netxen_adapter *VAR_9)
{
 int VAR_10 = 0, VAR_11;
 u32 *VAR_12, *VAR_13;
 struct netxen_minidump_template_hdr *VAR_14;
 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10) {
  VAR_9->mdump.fw_supports_md = 0;
  if ((VAR_10 == VAR_7) ||
   (VAR_10 == VAR_8)) {
   FUNC_2(&VAR_9->pdev->dev,
    "Flashed firmware version does not support minidump, "
    "minimum version required is [ %u.%u.%u ].\n ",
    VAR_4, VAR_5,
    VAR_6);
  }
  return VAR_10;
 }

 if (!VAR_9->mdump.md_template_size) {
  FUNC_1(&VAR_9->pdev->dev, "Error : Invalid template size "
  ",should be non-zero.\n");
  return -VAR_0;
 }
 VAR_9->mdump.md_template =
  FUNC_4(VAR_9->mdump.md_template_size, VAR_2);

 if (!VAR_9->mdump.md_template) {
  FUNC_1(&VAR_9->pdev->dev, "Unable to allocate memory "
   "for minidump template.\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10) {
  if (VAR_10 == VAR_8)
   VAR_9->mdump.fw_supports_md = 0;
  goto free_template;
 }

 if (FUNC_5(VAR_9)) {
  FUNC_1(&VAR_9->pdev->dev, "Minidump template checksum Error\n");
  VAR_10 = -VAR_0;
  goto free_template;
 }

 VAR_9->mdump.md_capture_mask = VAR_3;
 VAR_13 = (u32 *) VAR_9->mdump.md_template;
 VAR_12 = (u32 *) VAR_9->mdump.md_template;
 for (VAR_11 = 0; VAR_11 < VAR_9->mdump.md_template_size/sizeof(u32); VAR_11++)
  *VAR_12++ = FUNC_0(*VAR_13++);
 VAR_14 = (struct netxen_minidump_template_hdr *)
    VAR_9->mdump.md_template;
 VAR_9->mdump.md_capture_buff = ((void*)0);
 VAR_9->mdump.fw_supports_md = 1;
 VAR_9->mdump.md_enabled = 0;

 return VAR_10;

free_template:
 FUNC_3(VAR_9->mdump.md_template);
 VAR_9->mdump.md_template = ((void*)0);
 return VAR_10;
}
