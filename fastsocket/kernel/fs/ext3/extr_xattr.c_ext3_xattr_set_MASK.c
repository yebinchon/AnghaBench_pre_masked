
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 int FUNC_6 (int *,struct inode*,int,char const*,void const*,size_t,int) ;

int
FUNC_7(struct inode *VAR_1, int VAR_2, const char *VAR_3,
        const void *VAR_4, size_t VAR_5, int VAR_6)
{
 handle_t *VAR_7;
 int VAR_8, VAR_9 = 0;

retry:
 VAR_7 = FUNC_3(VAR_1, FUNC_0(VAR_1->i_sb));
 if (FUNC_1(VAR_7)) {
  VAR_8 = FUNC_2(VAR_7);
 } else {
  int VAR_10;

  VAR_8 = FUNC_6(VAR_7, VAR_1, VAR_2, VAR_3,
           VAR_4, VAR_5, VAR_6);
  VAR_10 = FUNC_4(VAR_7);
  if (VAR_8 == -VAR_0 &&
      FUNC_5(VAR_1->i_sb, &VAR_9))
   goto retry;
  if (VAR_8 == 0)
   VAR_8 = VAR_10;
 }

 return VAR_8;
}
