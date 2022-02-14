
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


struct TYPE_7__ {int sync; int mode; } ;
struct TYPE_8__ {TYPE_1__ st; } ;
struct atafb_par {scalar_t__ screen_base; TYPE_2__ hw; } ;
struct TYPE_12__ {scalar_t__ screen_base; } ;
struct TYPE_11__ {int (* set_screen_base ) (scalar_t__) ;} ;
struct TYPE_10__ {int syncmode; } ;
struct TYPE_9__ {int st_shiftmode; } ;


 TYPE_6__ VAR_0 ;
 TYPE_5__* VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct atafb_par *VAR_4)
{
 VAR_3.st_shiftmode = VAR_4->hw.st.mode;
 VAR_2.syncmode = VAR_4->hw.st.sync;

 if (VAR_0.screen_base != VAR_4->screen_base)
  VAR_1->set_screen_base(VAR_4->screen_base);
}
