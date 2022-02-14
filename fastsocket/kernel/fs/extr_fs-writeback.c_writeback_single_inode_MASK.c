
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; scalar_t__ nr_to_write; } ;
struct inode {int i_state; int i_list; int i_count; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct address_space*,struct writeback_control*) ;
 int FUNC_4 (struct address_space*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct inode*) ;
 int VAR_12 ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (struct address_space*,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct inode*,struct writeback_control*) ;

__attribute__((used)) static int
FUNC_14(struct inode *VAR_13, struct writeback_control *VAR_14)
{
 struct address_space *VAR_15 = VAR_13->i_mapping;
 unsigned VAR_16;
 int VAR_17;

 if (!FUNC_2(&VAR_13->i_count))
  FUNC_1(!(VAR_13->i_state & (VAR_7|VAR_5)));
 else
  FUNC_1(VAR_13->i_state & VAR_7);

 if (VAR_13->i_state & VAR_6) {
  if (VAR_14->sync_mode != VAR_9) {
   FUNC_10(VAR_13);
   return 0;
  }




  FUNC_6(VAR_13);
 }

 FUNC_0(VAR_13->i_state & VAR_6);


 VAR_16 = VAR_13->i_state & VAR_1;
 VAR_13->i_state |= VAR_6;
 VAR_13->i_state &= ~VAR_1;

 FUNC_12(&VAR_11);

 VAR_17 = FUNC_3(VAR_15, VAR_14);






 if (VAR_14->sync_mode == VAR_9) {
  int VAR_18 = FUNC_4(VAR_15);
  if (VAR_17 == 0)
   VAR_17 = VAR_18;
 }


 if (VAR_16 & (VAR_4 | VAR_2)) {
  int VAR_19 = FUNC_13(VAR_13, VAR_14);
  if (VAR_17 == 0)
   VAR_17 = VAR_19;
 }

 FUNC_11(&VAR_11);
 VAR_13->i_state &= ~VAR_6;
 if (!(VAR_13->i_state & (VAR_5 | VAR_0))) {
  if (FUNC_8(VAR_15, VAR_8)) {




   VAR_13->i_state |= VAR_3;
   if (VAR_14->nr_to_write <= 0) {



    FUNC_10(VAR_13);
   } else {







    FUNC_9(VAR_13);
   }
  } else if (VAR_13->i_state & VAR_1) {






   FUNC_9(VAR_13);
  } else if (FUNC_2(&VAR_13->i_count)) {



   FUNC_7(&VAR_13->i_list, &VAR_10);
  } else {



   FUNC_7(&VAR_13->i_list, &VAR_12);
  }
 }
 FUNC_5(VAR_13);
 return VAR_17;
}
