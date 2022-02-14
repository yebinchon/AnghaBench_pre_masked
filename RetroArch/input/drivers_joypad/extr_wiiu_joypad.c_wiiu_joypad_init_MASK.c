
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int max_slot; int pad_list; } ;
struct TYPE_7__ {int (* init ) (void*) ;} ;
struct TYPE_6__ {int (* init ) (void*) ;} ;
struct TYPE_5__ {int (* init ) (void*) ;} ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static bool FUNC_5(void* VAR_7)
{
   FUNC_1(&VAR_5);
   VAR_1.pad_list = FUNC_0(VAR_0);
   VAR_1.max_slot = VAR_0;

   VAR_6.init(VAR_7);
   VAR_3.init(VAR_7);




   VAR_4 = 1;
   (void)VAR_7;

   return 1;
}
