
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct display {TYPE_2__* stack; } ;
struct TYPE_6__ {TYPE_1__* values; } ;
struct TYPE_5__ {size_t opt; size_t entry; int opt_string_end; } ;
struct TYPE_4__ {int name; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (struct display*,unsigned int,size_t,int ) ;

__attribute__((used)) static void
FUNC_1(struct display *VAR_1, unsigned int VAR_2)

{
   VAR_1->stack[VAR_2].opt_string_end = FUNC_0(VAR_1, VAR_2, VAR_1->stack[VAR_2].opt,
      VAR_0[VAR_1->stack[VAR_2].opt].values[VAR_1->stack[VAR_2].entry].name);
}
