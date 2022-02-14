
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mtime; int i_ctime; scalar_t__ i_size; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct address_space*) ;
 int FUNC_6 (struct inode*,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, loff_t VAR_2)
{
 struct address_space *VAR_3 = VAR_1->i_mapping;
 loff_t VAR_4 = VAR_1->i_size, VAR_5 = VAR_2 - VAR_1->i_size;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 if (VAR_6)
  goto out;

 VAR_1->i_ctime = VAR_1->i_mtime = VAR_0;
 FUNC_4(VAR_1);
 if (FUNC_0(VAR_1)) {
  int VAR_7;





  VAR_6 = FUNC_2(VAR_3, VAR_4,
            VAR_4 + VAR_5 - 1);
  VAR_7 = FUNC_5(VAR_3);
  if (!VAR_6)
   VAR_6 = VAR_7;
  VAR_7 = FUNC_6(VAR_1, 1);
  if (!VAR_6)
   VAR_6 = VAR_7;
  if (!VAR_6) {
   VAR_6 = FUNC_1(VAR_3, VAR_4,
             VAR_4 + VAR_5 - 1);
  }
 }
out:
 return VAR_6;
}
