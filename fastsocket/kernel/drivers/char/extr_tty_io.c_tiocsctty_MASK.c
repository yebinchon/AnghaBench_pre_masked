
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {scalar_t__ session; } ;
struct TYPE_6__ {TYPE_1__* signal; } ;
struct TYPE_5__ {scalar_t__ tty; scalar_t__ leader; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,struct tty_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 if (VAR_2->signal->leader && (FUNC_7(VAR_2) == VAR_5->session))
  return VAR_7;

 FUNC_1(&VAR_4);




 if (!VAR_2->signal->leader || VAR_2->signal->tty) {
  VAR_7 = -VAR_1;
  goto unlock;
 }

 if (VAR_5->session) {




  if (VAR_6 == 1 && FUNC_0(VAR_0)) {



   FUNC_4(&VAR_3);
   FUNC_6(VAR_5->session);
   FUNC_5(&VAR_3);
  } else {
   VAR_7 = -VAR_1;
   goto unlock;
  }
 }
 FUNC_3(VAR_2, VAR_5);
unlock:
 FUNC_2(&VAR_4);
 return VAR_7;
}
