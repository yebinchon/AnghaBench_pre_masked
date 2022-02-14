
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_mode; scalar_t__ i_uid; int i_gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_6, int VAR_7,
  int (*VAR_8)(struct inode *VAR_9, int VAR_10))
{
 umode_t VAR_11 = VAR_6->i_mode;

 VAR_7 &= VAR_3 | VAR_4 | VAR_2;

 if (FUNC_1() == VAR_6->i_uid)
  VAR_11 >>= 6;
 else {
  if (FUNC_0(VAR_6) && (VAR_11 & VAR_5) && VAR_8) {
   int VAR_12 = VAR_8(VAR_6, VAR_7);
   if (VAR_12 != -VAR_1)
    return VAR_12;
  }

  if (FUNC_2(VAR_6->i_gid))
   VAR_11 >>= 3;
 }




 if ((VAR_7 & ~VAR_11) == 0)
  return 0;
 return -VAR_0;
}
