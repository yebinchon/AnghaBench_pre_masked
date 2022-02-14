
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atafb_par {int dummy; } ;
struct TYPE_2__ {int (* set_par ) (struct atafb_par*) ;} ;


 struct atafb_par VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct atafb_par*) ;

__attribute__((used)) static void FUNC_1(struct atafb_par *VAR_3)
{
 VAR_2->set_par(VAR_3);
 VAR_0 = *VAR_3;
 VAR_1 = 1;
}
