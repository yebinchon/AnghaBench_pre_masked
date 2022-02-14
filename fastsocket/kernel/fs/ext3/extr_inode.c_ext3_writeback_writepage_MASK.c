
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page*,int *,struct writeback_control*) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int * FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*,int *,struct writeback_control*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (struct page*) ;
 int FUNC_11 (struct writeback_control*,struct page*) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (int *,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_16(struct page *VAR_4,
    struct writeback_control *VAR_5)
{
 struct inode *VAR_6 = VAR_4->mapping->host;
 handle_t *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 int VAR_9;

 if (FUNC_3())
  goto out_fail;

 FUNC_13(VAR_4);
 if (FUNC_10(VAR_4)) {
  if (!FUNC_15(((void*)0), FUNC_9(VAR_4), 0,
          VAR_1, ((void*)0), VAR_2)) {


   return FUNC_2(VAR_4, ((void*)0), VAR_5);
  }
 }

 VAR_7 = FUNC_4(VAR_6, FUNC_7(VAR_6));
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto out_fail;
 }

 if (FUNC_12(VAR_6->i_sb, VAR_0) && FUNC_6(VAR_6))
  VAR_8 = FUNC_8(VAR_4, VAR_3, VAR_5);
 else
  VAR_8 = FUNC_2(VAR_4, VAR_3, VAR_5);

 VAR_9 = FUNC_5(VAR_7);
 if (!VAR_8)
  VAR_8 = VAR_9;
 return VAR_8;

out_fail:
 FUNC_11(VAR_5, VAR_4);
 FUNC_14(VAR_4);
 return VAR_8;
}
