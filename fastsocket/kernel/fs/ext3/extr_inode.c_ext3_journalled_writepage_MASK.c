
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
typedef int handle_t ;
struct TYPE_4__ {int i_state; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int ,int ,int ) ;
 int FUNC_6 (struct page*,int ,struct writeback_control*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 () ;
 int * FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct writeback_control*,struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (int *,int ,int ,int ,int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_17(struct page *VAR_6,
    struct writeback_control *VAR_7)
{
 struct inode *VAR_8 = VAR_6->mapping->host;
 handle_t *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 int VAR_11;

 if (FUNC_7())
  goto no_write;

 FUNC_14(VAR_6);
 VAR_9 = FUNC_8(VAR_8, FUNC_10(VAR_8));
 if (FUNC_2(VAR_9)) {
  VAR_10 = FUNC_3(VAR_9);
  goto no_write;
 }

 if (!FUNC_12(VAR_6) || FUNC_4(VAR_6)) {




  FUNC_0(VAR_6);
  VAR_10 = FUNC_5(VAR_6, 0, VAR_1,
     VAR_4);
  if (VAR_10 != 0) {
   FUNC_9(VAR_9);
   goto out_unlock;
  }
  VAR_10 = FUNC_16(VAR_9, FUNC_11(VAR_6), 0,
   VAR_1, ((void*)0), VAR_2);

  VAR_11 = FUNC_16(VAR_9, FUNC_11(VAR_6), 0,
    VAR_1, ((void*)0), VAR_5);
  if (VAR_10 == 0)
   VAR_10 = VAR_11;
  FUNC_1(VAR_8)->i_state |= VAR_0;
  FUNC_15(VAR_6);
 } else {





  VAR_10 = FUNC_6(VAR_6, VAR_3, VAR_7);
 }
 VAR_11 = FUNC_9(VAR_9);
 if (!VAR_10)
  VAR_10 = VAR_11;
out:
 return VAR_10;

no_write:
 FUNC_13(VAR_7, VAR_6);
out_unlock:
 FUNC_15(VAR_6);
 goto out;
}
