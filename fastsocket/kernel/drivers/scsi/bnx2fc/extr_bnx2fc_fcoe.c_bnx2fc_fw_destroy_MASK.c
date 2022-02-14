
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; int function; scalar_t__ expires; } ;
struct bnx2fc_hba {TYPE_1__ destroy_timer; int flags; int destroy_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct bnx2fc_hba*) ;
 int FUNC_2 (struct bnx2fc_hba*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct bnx2fc_hba *VAR_6)
{
 if (FUNC_8(VAR_1, &VAR_6->flags)) {
  if (FUNC_1(VAR_6) == 0) {
   FUNC_6(&VAR_6->destroy_timer);
   VAR_6->destroy_timer.expires = VAR_2 +
        VAR_5;
   VAR_6->destroy_timer.function = VAR_3;
   VAR_6->destroy_timer.data = (unsigned long)VAR_6;
   FUNC_0(&VAR_6->destroy_timer);
   FUNC_10(VAR_6->destroy_wait,
     FUNC_9(VAR_0,
       &VAR_6->flags));
   FUNC_3(VAR_0, &VAR_6->flags);

   if (FUNC_7(VAR_4))
    FUNC_5(VAR_4);

   FUNC_4(&VAR_6->destroy_timer);
  }
  FUNC_2(VAR_6);
 }
}
