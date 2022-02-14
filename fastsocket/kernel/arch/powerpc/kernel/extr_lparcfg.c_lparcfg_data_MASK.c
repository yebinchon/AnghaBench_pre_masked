
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,void*) ;
 struct device_node* FUNC_2 (char*) ;
 void* FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct seq_file*,void*) ;
 int FUNC_6 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_3, void *VAR_4)
{
 struct device_node *VAR_5;
 const char *VAR_6 = "";
 const char *VAR_7 = "";
 const char *VAR_8;
 const unsigned int *VAR_9;
 unsigned int VAR_10 = 0;

 FUNC_6(VAR_3, "%s %s \n", VAR_1, VAR_2);

 VAR_5 = FUNC_2("/");
 if (VAR_5) {
  VAR_8 = FUNC_3(VAR_5, "model", ((void*)0));
  if (VAR_8) {
   VAR_6 = VAR_8;

   if (FUNC_0(VAR_0))
    VAR_6 += 4;
  }
  VAR_8 = FUNC_3(VAR_5, "system-id", ((void*)0));
  if (VAR_8) {
   VAR_7 = VAR_8;

   if (FUNC_0(VAR_0))
    VAR_7 += 4;
  }
  VAR_9 = FUNC_3(VAR_5, "ibm,partition-no",
     ((void*)0));
  if (VAR_9)
   VAR_10 = *VAR_9;
  FUNC_4(VAR_5);
 }
 FUNC_6(VAR_3, "serial_number=%s\n", VAR_7);
 FUNC_6(VAR_3, "system_type=%s\n", VAR_6);
 FUNC_6(VAR_3, "partition_id=%d\n", (int)VAR_10);

 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_3, VAR_4);
 return FUNC_5(VAR_3, VAR_4);
}
