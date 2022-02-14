
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_ohci {TYPE_1__* host; } ;
struct hpsb_host {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 struct ti_ohci* FUNC_2 (int *,struct hpsb_host*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3 (struct hpsb_host *VAR_4)
{
 struct ti_ohci *VAR_5 = FUNC_2(&VAR_3, VAR_4);

 if (VAR_5)
  FUNC_1(VAR_2, FUNC_0(VAR_0,
          VAR_1 * 16 + VAR_5->host->id));
 return;
}
