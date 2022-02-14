
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_ohci {int dummy; } ;
struct hpsb_host {int id; scalar_t__ hostdata; TYPE_1__* driver; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *,int ,int *,char*,int) ;
 int FUNC_2 (struct ti_ohci*,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hpsb_host *VAR_8)
{
 struct ti_ohci *VAR_9;
 int VAR_10 = VAR_8->id;


 if (FUNC_3(VAR_8->driver->name, VAR_6))
  return;

 VAR_9 = (struct ti_ohci *)VAR_8->hostdata;

 FUNC_1(VAR_7, ((void*)0),
        FUNC_0(VAR_2,
       VAR_3 * 16 + (VAR_10<<2)),
        ((void*)0), "dv1394-%d", VAR_10);

 FUNC_2(VAR_9, VAR_0, VAR_4);
 FUNC_2(VAR_9, VAR_0, VAR_5);
 FUNC_2(VAR_9, VAR_1, VAR_4);
 FUNC_2(VAR_9, VAR_1, VAR_5);
}
