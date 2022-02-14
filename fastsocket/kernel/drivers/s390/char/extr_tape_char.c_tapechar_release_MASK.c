
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * idal_buf; } ;
struct tape_device {int required_tapemarks; TYPE_1__ char_data; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct tape_device*,int ,int) ;
 scalar_t__ FUNC_4 (struct tape_device*) ;
 int FUNC_5 (struct tape_device*) ;
 int FUNC_6 (struct tape_device*) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_2, struct file *VAR_3)
{
 struct tape_device *VAR_4;

 FUNC_0(6, "TCHAR:release: %x\n", FUNC_2(VAR_2));
 VAR_4 = (struct tape_device *) VAR_3->private_data;






 if ((FUNC_2(VAR_2) & 1) != 0) {
  if (VAR_4->required_tapemarks)
   FUNC_6(VAR_4);
  FUNC_3(VAR_4, VAR_0, 1);
 } else {
  if (VAR_4->required_tapemarks > 1) {
   if (FUNC_3(VAR_4, VAR_1, 1) == 0)
    VAR_4->required_tapemarks--;
  }
 }

 if (VAR_4->char_data.idal_buf != ((void*)0)) {
  FUNC_1(VAR_4->char_data.idal_buf);
  VAR_4->char_data.idal_buf = ((void*)0);
 }
 FUNC_5(VAR_4);
 VAR_3->private_data = FUNC_4(VAR_4);

 return 0;
}
