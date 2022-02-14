
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {int name; int access; int * bufptr; scalar_t__ busy; int present; } ;
struct inode {int dummy; } ;
struct file {struct pg* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 struct pg* VAR_6 ;
 int FUNC_1 (struct inode*) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pg*,int) ;
 int FUNC_5 (struct pg*) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_8, struct file *VAR_9)
{
 int VAR_10 = FUNC_1(VAR_8) & 0x7f;
 struct pg *VAR_11 = &VAR_6[VAR_10];
 int VAR_12 = 0;

 FUNC_3();
 if ((VAR_10 >= VAR_5) || (!VAR_11->present)) {
  VAR_12 = -VAR_1;
  goto out;
 }

 if (FUNC_7(0, &VAR_11->access)) {
  VAR_12 = -VAR_0;
  goto out;
 }

 if (VAR_11->busy) {
  FUNC_5(VAR_11);
  VAR_11->busy = 0;
 }

 FUNC_4(VAR_11, (VAR_7 > 1));

 VAR_11->bufptr = FUNC_2(VAR_4, VAR_3);
 if (VAR_11->bufptr == ((void*)0)) {
  FUNC_0(0, &VAR_11->access);
  FUNC_6("%s: buffer allocation failed\n", VAR_11->name);
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_9->private_data = VAR_11;

out:
 FUNC_8();
 return VAR_12;
}
