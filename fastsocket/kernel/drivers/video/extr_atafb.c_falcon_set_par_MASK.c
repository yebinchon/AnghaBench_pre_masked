
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int falcon; } ;
struct atafb_par {scalar_t__ screen_base; TYPE_1__ hw; } ;
struct TYPE_6__ {scalar_t__ screen_base; } ;
struct TYPE_5__ {int (* set_screen_base ) (scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct atafb_par *VAR_5)
{
 VAR_2 = 0;


 if (VAR_1.screen_base != VAR_5->screen_base)
  VAR_4->set_screen_base(VAR_5->screen_base);


 if (VAR_0)
  return;







 VAR_3 = VAR_5->hw.falcon;
 VAR_2 = 1;
}
