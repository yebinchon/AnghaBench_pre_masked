
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_bios_log {struct tpm_bios_log* bios_event_log; } ;
struct seq_file {struct tpm_bios_log* private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_bios_log*) ;
 struct tpm_bios_log* FUNC_1 (int,int ) ;
 int FUNC_2 (struct tpm_bios_log*) ;
 int FUNC_3 (struct file*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3,
          struct file *VAR_4)
{
 int VAR_5;
 struct tpm_bios_log *VAR_6;
 struct seq_file *VAR_7;

 VAR_6 = FUNC_1(sizeof(struct tpm_bios_log), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 if ((VAR_5 = FUNC_2(VAR_6)))
  goto out_free;


 VAR_5 = FUNC_3(VAR_4, &VAR_2);
 if (!VAR_5) {
  VAR_7 = VAR_4->private_data;
  VAR_7->private = VAR_6;
 } else {
  goto out_free;
 }

out:
 return VAR_5;
out_free:
 FUNC_0(VAR_6->bios_event_log);
 FUNC_0(VAR_6);
 goto out;
}
