
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {int users; scalar_t__ model; scalar_t__ type; int state; int open; scalar_t__ USE_ISO; int vb_vidq; int vbi_or_sliced_cc_mode; int devlist_count; struct cx231xx_fh* dev; } ;
struct cx231xx {int users; scalar_t__ model; scalar_t__ type; int state; int open; scalar_t__ USE_ISO; int vb_vidq; int vbi_or_sliced_cc_mode; int devlist_count; struct cx231xx* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct cx231xx_fh*,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct cx231xx_fh*) ;
 int FUNC_3 (struct cx231xx_fh*,int ,int ) ;
 int FUNC_4 (struct cx231xx_fh*,int ) ;
 int FUNC_5 (struct cx231xx_fh*) ;
 int FUNC_6 (struct cx231xx_fh*) ;
 int FUNC_7 (struct cx231xx_fh*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct cx231xx_fh*) ;
 scalar_t__ FUNC_10 (struct cx231xx_fh*) ;
 int FUNC_11 (struct cx231xx_fh*) ;
 int VAR_9 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_10)
{
 struct cx231xx_fh *VAR_11 = VAR_10->private_data;
 struct cx231xx *VAR_12 = VAR_11->dev;

 FUNC_8("users=%d\n", VAR_12->users);

 FUNC_8("users=%d\n", VAR_12->users);
 if (FUNC_10(VAR_11))
  FUNC_11(VAR_11);



 if (VAR_12->model != VAR_0 &&
     VAR_12->model != VAR_1)
  if (VAR_11->type == VAR_7) {
   FUNC_13(&VAR_11->vb_vidq);
   FUNC_12(&VAR_11->vb_vidq);



   if (VAR_12->state & VAR_3) {
    if (FUNC_0(&VAR_12->devlist_count) > 0) {
     FUNC_2(VAR_12);
     FUNC_9(VAR_12);
     VAR_12 = ((void*)0);
     return 0;
    }
    return 0;
   }


   FUNC_7(VAR_12);


   if (!VAR_12->vbi_or_sliced_cc_mode)
    FUNC_3(VAR_12, VAR_5, 0);
   else
    FUNC_3(VAR_12, VAR_4, 0);

   FUNC_9(VAR_11);
   VAR_12->users--;
   FUNC_14(&VAR_12->open, 1);
   return 0;
  }

 if (VAR_12->users == 1) {
  FUNC_13(&VAR_11->vb_vidq);
  FUNC_12(&VAR_11->vb_vidq);



  if (VAR_12->state & VAR_3) {
   FUNC_2(VAR_12);
   FUNC_9(VAR_12);
   VAR_12 = ((void*)0);
   return 0;
  }


  FUNC_1(VAR_12, VAR_8, VAR_9, 0);


  if (VAR_12->USE_ISO)
   FUNC_6(VAR_12);
  else
   FUNC_5(VAR_12);
  FUNC_4(VAR_12, VAR_2);


  FUNC_3(VAR_12, VAR_6, 0);
 }
 FUNC_9(VAR_11);
 VAR_12->users--;
 FUNC_14(&VAR_12->open, 1);
 return 0;
}
