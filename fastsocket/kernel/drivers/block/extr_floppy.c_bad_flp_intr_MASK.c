
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int abort; int reset; int recal; } ;
struct TYPE_12__ {TYPE_1__ max_errors; } ;
struct TYPE_11__ {int track; int probed_format; } ;
struct TYPE_10__ {int badness; } ;
struct TYPE_9__ {int reset; } ;
struct TYPE_8__ {int (* done ) (int ) ;} ;


 TYPE_6__* VAR_0 ;
 TYPE_5__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_8;

 if (VAR_7) {
  VAR_1->probed_format++;
  if (!FUNC_1())
   return;
 }
 VAR_8 = ++(*VAR_6);
 FUNC_0(VAR_2->badness, VAR_8);
 if (VAR_8 > VAR_0->max_errors.abort)
  VAR_5->done(0);
 if (VAR_8 > VAR_0->max_errors.reset)
  VAR_3->reset = 1;
 else if (VAR_8 > VAR_0->max_errors.recal)
  VAR_1->track = VAR_4;
}
