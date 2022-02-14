
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ivtv_mailbox_data {TYPE_1__* mbox; int busy; } ;
struct ivtv {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct ivtv *VAR_3, struct ivtv_mailbox_data *VAR_4, int VAR_5)
{
 u32 VAR_6 = FUNC_0(&VAR_4->mbox[VAR_5].flags);
 int VAR_7 = VAR_6 == VAR_2 || (VAR_6 & VAR_1);


 if (VAR_7 && !FUNC_1(VAR_5, &VAR_4->busy)) {
  FUNC_2(VAR_0, &VAR_4->mbox[VAR_5].flags);
  return 1;
 }
 return 0;
}
