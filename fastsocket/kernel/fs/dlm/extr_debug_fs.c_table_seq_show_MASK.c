
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rsbtbl_iter {int format; int rsb; int header; } ;


 int FUNC_0 (int ,struct seq_file*) ;
 int FUNC_1 (int ,struct seq_file*) ;
 int FUNC_2 (int ,struct seq_file*) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct rsbtbl_iter *VAR_2 = VAR_1;
 int VAR_3 = 0;

 switch (VAR_2->format) {
 case 1:
  VAR_3 = FUNC_0(VAR_2->rsb, VAR_0);
  break;
 case 2:
  if (VAR_2->header) {
   FUNC_3(VAR_0, "id nodeid remid pid xid exflags "
     "flags sts grmode rqmode time_ms "
     "r_nodeid r_len r_name\n");
   VAR_2->header = 0;
  }
  VAR_3 = FUNC_1(VAR_2->rsb, VAR_0);
  break;
 case 3:
  if (VAR_2->header) {
   FUNC_3(VAR_0, "version rsb 1.1 lvb 1.1 lkb 1.1\n");
   VAR_2->header = 0;
  }
  VAR_3 = FUNC_2(VAR_2->rsb, VAR_0);
  break;
 }

 return VAR_3;
}
