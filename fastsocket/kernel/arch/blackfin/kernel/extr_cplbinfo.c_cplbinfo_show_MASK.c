
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct cplbinfo_data {size_t pos; size_t switched; TYPE_1__* tbl; } ;
typedef size_t loff_t ;
struct TYPE_2__ {unsigned long addr; unsigned long data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,int,unsigned long,unsigned long,int ,char,char,char,char) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_3, void *VAR_4)
{
 struct cplbinfo_data *VAR_5;
 unsigned long VAR_6, VAR_7;
 loff_t VAR_8;

 VAR_5 = VAR_4;
 VAR_8 = VAR_5->pos;
 VAR_7 = VAR_5->tbl[VAR_8].addr;
 VAR_6 = VAR_5->tbl[VAR_8].data;

 FUNC_0(VAR_3,
  "%d\t0x%08lx\t%05lx\t%s\t%c\t%c\t%c\t%c\n",
  (int)VAR_8, VAR_7, VAR_6, FUNC_1(VAR_6),
  (VAR_6 & VAR_1) ? 'Y' : 'N',
  (VAR_6 & VAR_2) ? 'Y' : 'N',
  (VAR_6 & VAR_0) ? 'Y' : 'N',
  VAR_8 < VAR_5->switched ? 'N' : 'Y');

 return 0;
}
