
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int datablklen; int datablkcnt; int level3cnt; } ;
struct capi20_appl {TYPE_1__ rparam; int applid; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct capi20_appl *VAR_2 = *(struct capi20_appl **) VAR_1;

 if (!VAR_2)
  return 0;

 FUNC_0(VAR_0, "%u %d %d %d\n",
     VAR_2->applid,
     VAR_2->rparam.level3cnt,
     VAR_2->rparam.datablkcnt,
     VAR_2->rparam.datablklen);

 return 0;
}
