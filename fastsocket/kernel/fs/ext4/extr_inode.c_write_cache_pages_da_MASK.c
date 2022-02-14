
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {long nr_to_write; int range_start; int range_end; scalar_t__ sync_mode; } ;
struct pagevec {struct page** pages; } ;
struct page {int index; struct address_space* mapping; } ;
struct mpage_da_data {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct page*,struct writeback_control*,struct mpage_da_data*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (struct pagevec*,int ) ;
 unsigned int FUNC_9 (struct pagevec*,struct address_space*,int*,int,scalar_t__) ;
 int FUNC_10 (struct pagevec*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int FUNC_14(struct address_space *VAR_7,
    struct writeback_control *VAR_8,
    struct mpage_da_data *VAR_9,
    pgoff_t *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;
 struct pagevec VAR_13;
 unsigned VAR_14;
 pgoff_t VAR_15;
 pgoff_t VAR_16;
 long VAR_17 = VAR_8->nr_to_write;
 int VAR_18;

 FUNC_8(&VAR_13, 0);
 VAR_15 = VAR_8->range_start >> VAR_4;
 VAR_16 = VAR_8->range_end >> VAR_4;

 if (VAR_8->sync_mode == VAR_5)
  VAR_18 = VAR_2;
 else
  VAR_18 = VAR_1;

 *VAR_10 = VAR_15;
 while (!VAR_12 && (VAR_15 <= VAR_16)) {
  int VAR_19;

  VAR_14 = FUNC_9(&VAR_13, VAR_7, &VAR_15, VAR_18,
         FUNC_7(VAR_16 - VAR_15, (pgoff_t)VAR_3-1) + 1);
  if (VAR_14 == 0)
   break;

  for (VAR_19 = 0; VAR_19 < VAR_14; VAR_19++) {
   struct page *VAR_20 = VAR_13.pages[VAR_19];
   if (VAR_20->index > VAR_16) {
    VAR_12 = 1;
    break;
   }

   *VAR_10 = VAR_20->index + 1;

   FUNC_6(VAR_20);
   if (FUNC_11(VAR_20->mapping != VAR_7)) {
continue_unlock:
    FUNC_12(VAR_20);
    continue;
   }

   if (!FUNC_1(VAR_20)) {

    goto continue_unlock;
   }

   if (FUNC_2(VAR_20)) {
    if (VAR_8->sync_mode != VAR_6)
     FUNC_13(VAR_20);
    else
     goto continue_unlock;
   }

   FUNC_0(FUNC_2(VAR_20));
   if (!FUNC_4(VAR_20))
    goto continue_unlock;

   VAR_11 = FUNC_3(VAR_20, VAR_8, VAR_9);
   if (FUNC_11(VAR_11)) {
    if (VAR_11 == VAR_0) {
     FUNC_12(VAR_20);
     VAR_11 = 0;
    } else {
     VAR_12 = 1;
     break;
    }
   }

   if (VAR_17 > 0) {
    VAR_17--;
    if (VAR_17 == 0 &&
        VAR_8->sync_mode == VAR_6) {
     VAR_12 = 1;
     break;
    }
   }
  }
  FUNC_10(&VAR_13);
  FUNC_5();
 }
 return VAR_11;
}
