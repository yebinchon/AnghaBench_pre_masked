
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* ChangeVideoFormat ) (int) ;} ;
struct TYPE_3__ {scalar_t__ IsPal; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_4 ;

int FUNC_1(int VAR_5)
{
   VAR_3 = VAR_4.IsPal ? VAR_1 : VAR_0;

   VAR_2->ChangeVideoFormat(VAR_5 ? 50 : 60);

   return 0;
}
