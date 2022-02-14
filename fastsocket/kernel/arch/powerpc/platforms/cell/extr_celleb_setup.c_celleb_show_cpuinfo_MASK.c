
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (char*) ;
 char* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct seq_file*,char*,int ,char const*) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_1)
{
 struct device_node *VAR_2;
 const char *VAR_3 = "";

 VAR_2 = FUNC_0("/");
 if (VAR_2)
  VAR_3 = FUNC_1(VAR_2, "model", ((void*)0));

 FUNC_3(VAR_1, "machine\t\t: %s %s\n", VAR_0, VAR_3);
 FUNC_2(VAR_2);
}
