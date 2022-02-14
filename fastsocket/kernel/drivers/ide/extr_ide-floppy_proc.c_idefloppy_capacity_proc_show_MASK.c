
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ private; } ;
typedef int ide_drive_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,long long) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 ide_drive_t*VAR_2 = (ide_drive_t *)VAR_0->private;

 FUNC_1(VAR_0, "%llu\n", (long long)FUNC_0(VAR_2));
 return 0;
}
