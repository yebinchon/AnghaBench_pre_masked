
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vt_notifier_param {struct vc_data* vc; } ;
struct vc_data {int vc_cols; int vc_rows; int vc_screenbuf; int vc_screenbuf_size; int * vc_uni_pagedir_loc; } ;
struct TYPE_2__ {struct vc_data* d; int SAK_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,struct vt_notifier_param*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vc_data*) ;
 int FUNC_5 (struct vc_data*) ;
 int FUNC_6 (int ,int ) ;
 struct vc_data* FUNC_7 (int,int ) ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_8 (struct vc_data*,int ,int ,int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (struct vc_data*,unsigned int,int) ;
 int VAR_10 ;

int FUNC_11(unsigned int VAR_11)
{
 FUNC_1();

 if (VAR_11 >= VAR_5)
  return -VAR_2;
 if (!VAR_9[VAR_11].d) {
     struct vc_data *VAR_12;
     struct vt_notifier_param VAR_13;


     if (VAR_11 >= VAR_6 && !FUNC_3(VAR_0))
       return -VAR_3;







     VAR_13.vc = VAR_12 = FUNC_7(sizeof(struct vc_data), VAR_4);
     if (!VAR_12)
  return -VAR_1;
     VAR_9[VAR_11].d = VAR_12;
     FUNC_0(&VAR_9[VAR_11].SAK_work, VAR_8);
     FUNC_10(VAR_12, VAR_11, 1);
     if (!*VAR_12->vc_uni_pagedir_loc)
  FUNC_4(VAR_12);
     VAR_12->vc_screenbuf = FUNC_6(VAR_12->vc_screenbuf_size, VAR_4);
     if (!VAR_12->vc_screenbuf) {
  FUNC_5(VAR_12);
  VAR_9[VAR_11].d = ((void*)0);
  return -VAR_1;
     }
     FUNC_8(VAR_12, VAR_12->vc_rows, VAR_12->vc_cols, 1);
     FUNC_9(VAR_11);
     FUNC_2(&VAR_10, VAR_7, &VAR_13);
 }
 return 0;
}
