
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct async_struct {int last_active; int tty; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int serdatr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct async_struct* VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct async_struct*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct async_struct * VAR_8;

 if (VAR_4.serdatr & VAR_3) {




   VAR_8 = VAR_2;
   if (!VAR_8 || !VAR_8->tty)
  return VAR_1;

   FUNC_1(VAR_8);
   VAR_8->last_active = VAR_5;



 }
 return VAR_0;
}
