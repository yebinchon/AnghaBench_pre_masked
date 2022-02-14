
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {int flags; int available; int name; int * bufptr; int present; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct pt_unit* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 struct pt_unit* VAR_11 ;
 int FUNC_6 (struct pt_unit*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_12, struct file *VAR_13)
{
 int VAR_14 = FUNC_2(VAR_12) & 0x7F;
 struct pt_unit *VAR_15 = VAR_11 + VAR_14;
 int VAR_16;

 FUNC_4();
 if (VAR_14 >= VAR_9 || (!VAR_15->present)) {
  FUNC_7();
  return -VAR_1;
 }

 VAR_16 = -VAR_0;
 if (!FUNC_0(&VAR_15->available))
  goto out;

 FUNC_6(VAR_15);

 VAR_16 = -VAR_1;
 if (!(VAR_15->flags & VAR_7))
  goto out;

 VAR_16 = -VAR_3;
 if ((!(VAR_15->flags & VAR_10)) && (VAR_13->f_mode & VAR_4))
  goto out;

 if (!(FUNC_2(VAR_12) & 128))
  VAR_15->flags |= VAR_8;

 VAR_16 = -VAR_2;
 VAR_15->bufptr = FUNC_3(VAR_6, VAR_5);
 if (VAR_15->bufptr == ((void*)0)) {
  FUNC_5("%s: buffer allocation failed\n", VAR_15->name);
  goto out;
 }

 VAR_13->private_data = VAR_15;
 FUNC_7();
 return 0;

out:
 FUNC_1(&VAR_15->available);
 FUNC_7();
 return VAR_16;
}
