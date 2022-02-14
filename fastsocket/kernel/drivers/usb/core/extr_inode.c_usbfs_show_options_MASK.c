
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct seq_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_12, struct vfsmount *VAR_13)
{
 if (VAR_8 != 0)
  FUNC_0(VAR_12, ",devuid=%u", VAR_8);
 if (VAR_6 != 0)
  FUNC_0(VAR_12, ",devgid=%u", VAR_6);
 if (VAR_7 != VAR_1)
  FUNC_0(VAR_12, ",devmode=%o", VAR_7);
 if (VAR_5 != 0)
  FUNC_0(VAR_12, ",busuid=%u", VAR_5);
 if (VAR_3 != 0)
  FUNC_0(VAR_12, ",busgid=%u", VAR_3);
 if (VAR_4 != VAR_0)
  FUNC_0(VAR_12, ",busmode=%o", VAR_4);
 if (VAR_11 != 0)
  FUNC_0(VAR_12, ",listuid=%u", VAR_11);
 if (VAR_9 != 0)
  FUNC_0(VAR_12, ",listgid=%u", VAR_9);
 if (VAR_10 != VAR_2)
  FUNC_0(VAR_12, ",listmode=%o", VAR_10);

 return 0;
}
