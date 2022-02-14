
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urdev {int dummy; } ;
struct file_control_block {int file_stat; int rec_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file_control_block*,int ) ;
 int FUNC_1 (struct file_control_block*) ;
 struct file_control_block* FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct urdev *VAR_4)
{
 struct file_control_block *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3 | VAR_2);
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_5, 0);
 if (VAR_6)
  goto fail_free;
 if (VAR_5->file_stat & VAR_1)
  VAR_6 = 0;
 else
  VAR_6 = VAR_5->rec_len;

fail_free:
 FUNC_1(VAR_5);
 return VAR_6;
}
