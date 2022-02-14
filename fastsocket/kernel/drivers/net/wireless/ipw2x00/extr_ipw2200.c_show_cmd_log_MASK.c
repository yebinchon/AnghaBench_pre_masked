
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ipw_priv {int cmdlog_pos; int cmdlog_len; TYPE_2__* cmdlog; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int len; scalar_t__ param; int cmd; } ;
struct TYPE_4__ {TYPE_1__ cmd; int retcode; int jiffies; } ;


 int VAR_0 ;
 struct ipw_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char*,int,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct ipw_priv *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5 = 0, VAR_6;
 if (!VAR_4->cmdlog)
  return 0;
 for (VAR_6 = (VAR_4->cmdlog_pos + 1) % VAR_4->cmdlog_len;
      (VAR_6 != VAR_4->cmdlog_pos) && (VAR_0 - VAR_5);
      VAR_6 = (VAR_6 + 1) % VAR_4->cmdlog_len) {
  VAR_5 +=
      FUNC_1(VAR_3 + VAR_5, VAR_0 - VAR_5,
        "\n%08lX%08X%08X%08X\n", VAR_4->cmdlog[VAR_6].jiffies,
        VAR_4->cmdlog[VAR_6].retcode, VAR_4->cmdlog[VAR_6].cmd.cmd,
        VAR_4->cmdlog[VAR_6].cmd.len);
  VAR_5 +=
      FUNC_2(VAR_3 + VAR_5, VAR_0 - VAR_5,
     (u8 *) VAR_4->cmdlog[VAR_6].cmd.param,
     VAR_4->cmdlog[VAR_6].cmd.len);
  VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_0 - VAR_5, "\n");
 }
 VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_0 - VAR_5, "\n");
 return VAR_5;
}
