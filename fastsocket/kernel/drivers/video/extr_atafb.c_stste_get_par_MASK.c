
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sync; int mode; } ;
struct TYPE_6__ {TYPE_1__ st; } ;
struct atafb_par {int screen_base; TYPE_2__ hw; } ;
struct TYPE_8__ {int bas_hi; int bas_md; int bas_lo; int syncmode; } ;
struct TYPE_7__ {int st_shiftmode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct atafb_par *VAR_3)
{
 unsigned long VAR_4;
 VAR_3->hw.st.mode = VAR_2.st_shiftmode;
 VAR_3->hw.st.sync = VAR_1.syncmode;
 VAR_4 = ((VAR_1.bas_hi & 0xff) << 16) |
        ((VAR_1.bas_md & 0xff) << 8);
 if (FUNC_0(VAR_0))
  VAR_4 |= (VAR_1.bas_lo & 0xff);
 VAR_3->screen_base = FUNC_1(VAR_4);
}
