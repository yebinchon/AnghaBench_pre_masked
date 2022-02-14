
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {unsigned int index; TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef unsigned int loff_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct page*,struct writeback_control*,unsigned int) ;
 int FUNC_4 (struct page*,int ,unsigned int) ;
 int FUNC_5 (struct page*,int ,unsigned int,int ) ;
 int FUNC_6 (struct page*,int ,struct writeback_control*) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 unsigned int FUNC_9 (struct inode*) ;
 int VAR_8 ;
 int FUNC_10 (struct page*,int ,struct writeback_control*) ;
 struct buffer_head* FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (struct page*) ;
 int FUNC_13 (struct writeback_control*,struct page*) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (struct inode*,struct page*) ;
 int FUNC_16 (struct page*) ;
 scalar_t__ FUNC_17 (int *,struct buffer_head*,int ,unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_18(struct page *VAR_9,
     struct writeback_control *VAR_10)
{
 int VAR_11 = 0;
 loff_t VAR_12;
 unsigned int VAR_13;
 struct buffer_head *VAR_14;
 struct inode *VAR_15 = VAR_9->mapping->host;

 FUNC_15(VAR_15, VAR_9);
 VAR_12 = FUNC_9(VAR_15);
 if (VAR_9->index == VAR_12 >> VAR_2)
  VAR_13 = VAR_12 & ~VAR_1;
 else
  VAR_13 = VAR_3;

 if (FUNC_12(VAR_9)) {
  VAR_14 = FUNC_11(VAR_9);
  if (FUNC_17(((void*)0), VAR_14, 0, VAR_13, ((void*)0),
     VAR_7)) {
   FUNC_2((VAR_6->flags & (VAR_5|VAR_4)) ==
    VAR_5);
   FUNC_13(VAR_10, VAR_9);
   FUNC_16(VAR_9);
   return 0;
  }
 } else {
  VAR_11 = FUNC_5(VAR_9, 0, VAR_13,
       VAR_8);
  if (!VAR_11) {
   VAR_14 = FUNC_11(VAR_9);

   if (FUNC_17(((void*)0), VAR_14, 0, VAR_13, ((void*)0),
      VAR_7)) {
    FUNC_13(VAR_10, VAR_9);
    FUNC_16(VAR_9);
    return 0;
   }
  } else {





   FUNC_13(VAR_10, VAR_9);
   FUNC_16(VAR_9);
   return 0;
  }

  FUNC_4(VAR_9, 0, VAR_13);
 }

 if (FUNC_1(VAR_9) && FUNC_7(VAR_15)) {




  FUNC_0(VAR_9);
  return FUNC_3(VAR_9, VAR_10, VAR_13);
 }

 if (FUNC_14(VAR_15->i_sb, VAR_0) && FUNC_8(VAR_15))
  VAR_11 = FUNC_10(VAR_9, VAR_8, VAR_10);
 else
  VAR_11 = FUNC_6(VAR_9, VAR_8,
         VAR_10);

 return VAR_11;
}
