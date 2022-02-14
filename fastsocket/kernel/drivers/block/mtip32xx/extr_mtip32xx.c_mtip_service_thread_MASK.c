
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtip_port {int flags; int* cmds_to_issue; int svc_wait; } ;
struct driver_data {int slot_groups; int dd_flag; struct mtip_port* port; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long,int*) ;
 unsigned long FUNC_1 (int*,unsigned int,unsigned long) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct driver_data*) ;
 int FUNC_4 (struct mtip_port*,unsigned long) ;
 int FUNC_5 (unsigned long,int*) ;
 int FUNC_6 (unsigned long,int*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_7)
{
 struct driver_data *VAR_8 = (struct driver_data *)VAR_7;
 unsigned long VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12 = VAR_8->slot_groups * 32;
 struct mtip_port *VAR_13 = VAR_8->port;

 while (1) {




  FUNC_8(VAR_13->svc_wait, (VAR_13->flags) &&
   !(VAR_13->flags & VAR_3));

  if (FUNC_2())
   break;

  if (FUNC_7(FUNC_6(VAR_1,
    &VAR_8->dd_flag)))
   break;

  FUNC_5(VAR_5, &VAR_13->flags);
  if (FUNC_6(VAR_2, &VAR_13->flags)) {
   VAR_9 = 1;

   VAR_10 = VAR_12;
   VAR_11 = 0;
   while (1) {
    VAR_9 = FUNC_1(VAR_13->cmds_to_issue,
      VAR_12, VAR_9);
    if (VAR_11 == 1) {
     if ((VAR_10 >= VAR_9) ||
      (VAR_9 >= VAR_12))
      break;
    }
    if (FUNC_7(VAR_10 == VAR_12))
     VAR_10 = VAR_9;

    if (FUNC_7(VAR_9 == VAR_12)) {
     VAR_9 = 1;
     VAR_11 = 1;
     continue;
    }


    FUNC_4(VAR_13, VAR_9);

    FUNC_0(VAR_9, VAR_13->cmds_to_issue);
   }

   FUNC_0(VAR_2, &VAR_13->flags);
  } else if (FUNC_6(VAR_4, &VAR_13->flags)) {
   if (!FUNC_3(VAR_8))
    FUNC_5(VAR_0,
       &VAR_8->dd_flag);
   FUNC_0(VAR_4, &VAR_13->flags);
  }
  FUNC_0(VAR_5, &VAR_13->flags);

  if (FUNC_6(VAR_6, &VAR_13->flags))
   break;
 }
 return 0;
}
