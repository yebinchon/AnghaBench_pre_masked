
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;
struct desc_ptr {int address; int size; } ;


 int FUNC_0 (struct seq_file*,char*,char*,int ) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, struct seq_file *VAR_1, struct desc_ptr VAR_2)
{
 FUNC_0(VAR_1, " %s\t: %016llx\n", VAR_0, (u64)(VAR_2.address | VAR_2.size));
}
