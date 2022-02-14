
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct megasas_instance {int dummy; } ;
struct megasas_header {int cmd_status; } ;
struct megasas_cmd {TYPE_1__* frame; } ;
struct TYPE_2__ {struct megasas_header hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

int
FUNC_2(struct megasas_instance *VAR_2, struct megasas_cmd *VAR_3)
{
 int VAR_4;
 struct megasas_header *VAR_5 = &VAR_3->frame->hdr;

 u32 VAR_6 = VAR_1 * 1000;




 for (VAR_4 = 0; (VAR_4 < VAR_6) && (VAR_5->cmd_status == 0xff); VAR_4 += 20) {
  FUNC_1();
  FUNC_0(20);
 }

 if (VAR_5->cmd_status == 0xff)
  return -VAR_0;

 return 0;
}
