
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int pix_tx_time; int line_upd_time; TYPE_1__* extif; scalar_t__ vsync_only; } ;
struct TYPE_3__ {int (* enable_tearsync ) (int,int) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(int VAR_2, int VAR_3, int VAR_4, int VAR_5,
       int VAR_6, int VAR_7)
{
 u8 VAR_8;

 VAR_8 = FUNC_0(VAR_0);
 VAR_8 |= 1 << 3;
 FUNC_1(VAR_0, VAR_8);

 if (FUNC_2(VAR_1.vsync_only || VAR_7)) {
  VAR_1.extif->enable_tearsync(1, 0);
  return;
 }

 if (VAR_3 * VAR_1.pix_tx_time < VAR_1.line_upd_time) {
  VAR_1.extif->enable_tearsync(1, 0);
  return;
 }

 if ((VAR_3 * VAR_1.pix_tx_time / 1000) * VAR_4 <
     (VAR_2 + VAR_6) * (VAR_1.line_upd_time / 1000)) {
  VAR_1.extif->enable_tearsync(1, 0);
  return;
 }

 VAR_1.extif->enable_tearsync(1, VAR_2 + 1);
}
