
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct cmac {int offset; int nucast; struct adapter* adapter; } ;
struct TYPE_3__ {int * xauicfg; } ;
struct TYPE_4__ {scalar_t__ rev; TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (struct adapter*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct adapter*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct adapter*) ;

__attribute__((used)) static void FUNC_5(struct cmac *VAR_5, struct adapter *VAR_6, int VAR_7)
{
 u16 VAR_8;

 VAR_5->adapter = VAR_6;
 FUNC_1(VAR_6->pdev, 0x2, &VAR_8);

 if (VAR_8 == 0x37 && !VAR_6->params.vpd.xauicfg[1])
  VAR_7 = 0;
 VAR_5->offset = (VAR_4 - VAR_3) * VAR_7;
 VAR_5->nucast = 1;

 if (VAR_6->params.rev == 0 && FUNC_4(VAR_6)) {
  FUNC_3(VAR_6, VAR_1 + VAR_5->offset,
        FUNC_0(VAR_6) ? 0x2901c04 : 0x2301c04);
  FUNC_2(VAR_6, VAR_0 + VAR_5->offset,
     VAR_2, 0);
 }
}
