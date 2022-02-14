
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devno; } ;
struct urdev {TYPE_1__ dev_id; } ;
struct file_control_block {int file_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct file_control_block*,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct file_control_block*) ;
 struct file_control_block* FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct urdev *VAR_9)
{
 struct file_control_block *VAR_10;
 char *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_8 | VAR_7);
 if (!VAR_10)
  return -VAR_2;


 VAR_12 = FUNC_2(VAR_10, 0);
 if (VAR_12)
  goto fail_free_fcb;


 if (VAR_10->file_stat & (VAR_5 | VAR_6)) {
  VAR_12 = -VAR_3;
  goto fail_free_fcb;
 }


 VAR_11 = (char *) FUNC_0(VAR_8 | VAR_7);
 if (!VAR_11) {
  VAR_12 = -VAR_2;
  goto fail_free_fcb;
 }
 VAR_12 = FUNC_1(VAR_9->dev_id.devno, VAR_11);
 if ((VAR_12 != 0) && (VAR_12 != -VAR_1))
  goto fail_free_buf;


 VAR_12 = FUNC_2(VAR_10, 0);
 if (VAR_12)
  goto fail_free_buf;
 if (!(VAR_10->file_stat & VAR_4)) {
  VAR_12 = -VAR_0;
  goto fail_free_buf;
 }
 VAR_12 = 0;

fail_free_buf:
 FUNC_3((unsigned long) VAR_11);
fail_free_fcb:
 FUNC_4(VAR_10);
 return VAR_12;
}
