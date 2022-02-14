
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {scalar_t__ i_size; int i_mode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,scalar_t__) ;
 int FUNC_8 (struct inode*) ;

int FUNC_9(struct inode *VAR_0, u64 VAR_1)
{
 int VAR_2;
 u64 VAR_3;

 FUNC_0(!FUNC_2(VAR_0->i_mode));

 VAR_2 = FUNC_7(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_6(FUNC_1(VAR_0));
 if (VAR_2)
  goto out;

 VAR_3 = VAR_0->i_size;
 if (VAR_1 >= VAR_3) {
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  goto out;
 }

 VAR_2 = FUNC_4(VAR_0, VAR_3, VAR_1);
out:
 FUNC_8(VAR_0);
 return VAR_2;
}
