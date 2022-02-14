
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc {int n_devices; struct di_buf_entry* di_buf; } ;
struct seq_file {struct whc* private; } ;
struct di_buf_entry {int addr_sec_info; scalar_t__ availability_info; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,unsigned long*,int ) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_5, void *VAR_6)
{
 struct whc *VAR_7 = VAR_5->private;
 char VAR_8[72];
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7->n_devices; VAR_9++) {
  struct di_buf_entry *VAR_10 = &VAR_7->di_buf[VAR_9];

  FUNC_0(VAR_8, sizeof(VAR_8),
     (unsigned long *)VAR_10->availability_info, VAR_0);

  FUNC_1(VAR_5, "DI[%d]\n", VAR_9);
  FUNC_1(VAR_5, "  availability: %s\n", VAR_8);
  FUNC_1(VAR_5, "  %c%c key idx: %d dev addr: %d\n",
      (VAR_10->addr_sec_info & VAR_4) ? 'S' : ' ',
      (VAR_10->addr_sec_info & VAR_2) ? 'D' : ' ',
      (VAR_10->addr_sec_info & VAR_3) >> 8,
      (VAR_10->addr_sec_info & VAR_1));
 }
 return 0;
}
