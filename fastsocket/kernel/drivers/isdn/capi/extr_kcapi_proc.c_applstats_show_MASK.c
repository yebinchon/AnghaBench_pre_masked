
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct capi20_appl {int nsentdatapkt; int nsentctlpkt; int nrecvdatapkt; int nrecvctlpkt; int applid; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct capi20_appl *VAR_2 = *(struct capi20_appl **) VAR_1;

 if (!VAR_2)
  return 0;

 FUNC_0(VAR_0, "%u %lu %lu %lu %lu\n",
     VAR_2->applid,
     VAR_2->nrecvctlpkt,
     VAR_2->nrecvdatapkt,
     VAR_2->nsentctlpkt,
     VAR_2->nsentdatapkt);

 return 0;
}
