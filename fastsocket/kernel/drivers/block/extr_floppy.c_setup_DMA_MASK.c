
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int reset; int address; } ;
struct TYPE_5__ {int (* done ) (int ) ;} ;
struct TYPE_4__ {scalar_t__ length; int cmd_count; int flags; scalar_t__ kernel_data; scalar_t__* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 () ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,...) ;
 TYPE_1__* VAR_5 ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_15(void)
{
 unsigned long VAR_7;
 VAR_7 = FUNC_0();
 FUNC_3();
 FUNC_2();
 FUNC_1(VAR_5->kernel_data, VAR_5->length);
 FUNC_8((VAR_5->flags & VAR_3) ?
   VAR_0 : VAR_1);
 FUNC_6(VAR_5->kernel_data);
 FUNC_7(VAR_5->length);
 VAR_6 = VAR_2->address;
 FUNC_5();
 FUNC_11(VAR_7);

 FUNC_9();
}
