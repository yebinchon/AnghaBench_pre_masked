
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (int *,struct inode*,int,int,int*) ;
 int FUNC_2 (int ,int,struct buffer_head**) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;

struct buffer_head *FUNC_5(handle_t *VAR_2, struct inode *VAR_3,
          int VAR_4, int VAR_5, int *VAR_6)
{
 struct buffer_head * VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_7)
  return VAR_7;
 if (FUNC_0(VAR_7))
  return VAR_7;
 FUNC_2(VAR_1, 1, &VAR_7);
 FUNC_4(VAR_7);
 if (FUNC_0(VAR_7))
  return VAR_7;
 FUNC_3(VAR_7);
 *VAR_6 = -VAR_0;
 return ((void*)0);
}
