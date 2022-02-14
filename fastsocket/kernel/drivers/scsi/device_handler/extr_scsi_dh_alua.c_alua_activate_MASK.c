
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct alua_dh_data {int tpgs; int state; int flags; int * callback_data; int (* callback_fn ) (void*,int) ;int pref; } ;
typedef int (* activate_complete ) (void*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (struct scsi_device*,struct alua_dh_data*) ;
 struct alua_dh_data* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct alua_dh_data*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_6,
   activate_complete VAR_7, void *VAR_8)
{
 struct alua_dh_data *VAR_9 = FUNC_1(VAR_6);
 int VAR_10 = VAR_2;
 int VAR_11 = 0;

 VAR_10 = FUNC_0(VAR_6, VAR_9);
 if (VAR_10 != VAR_2)
  goto out;

 if (VAR_9->tpgs & VAR_4) {
  switch (VAR_9->state) {
  case 132:
   VAR_11 = 1;
   if ((VAR_9->flags & VAR_0) &&
       (!VAR_9->pref) &&
       (VAR_9->tpgs & VAR_5))
    VAR_11 = 0;
   break;
  case 130:
  case 128:
   VAR_11 = 1;
   break;
  case 131:
   VAR_10 = VAR_1;
   break;
  case 129:
   VAR_10 = VAR_3;
   break;
  default:
   break;
  }
 }

 if (VAR_11) {
  VAR_9->callback_fn = VAR_7;
  VAR_9->callback_data = VAR_8;
  VAR_10 = FUNC_2(VAR_9);
  if (VAR_10 == VAR_2)
   return 0;
  VAR_9->callback_fn = VAR_9->callback_data = ((void*)0);
 }

out:
 if (VAR_7)
  VAR_7(VAR_8, VAR_10);
 return 0;
}
