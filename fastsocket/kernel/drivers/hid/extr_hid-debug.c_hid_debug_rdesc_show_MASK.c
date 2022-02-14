
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct hid_device* private; } ;
struct hid_device {int rsize; int * rdesc; } ;


 int FUNC_0 (struct hid_device*,struct seq_file*) ;
 int FUNC_1 (struct hid_device*,struct seq_file*) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct hid_device *VAR_2 = VAR_0->private;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->rsize; VAR_3++)
  FUNC_2(VAR_0, "%02x ", VAR_2->rdesc[VAR_3]);
 FUNC_2(VAR_0, "\n\n");


 FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_0, "\n");
 FUNC_1(VAR_2, VAR_0);

 return 0;
}
