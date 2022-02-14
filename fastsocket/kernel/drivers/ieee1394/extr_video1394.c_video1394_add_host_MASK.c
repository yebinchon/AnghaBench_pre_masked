
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_ohci {TYPE_1__* host; } ;
struct hpsb_host {scalar_t__ hostdata; TYPE_2__* driver; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int ,int *,char*,int ,int) ;
 int FUNC_3 (int *,struct hpsb_host*,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,struct hpsb_host*,struct ti_ohci*) ;
 int FUNC_5 (int *,struct hpsb_host*,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7 (struct hpsb_host *VAR_7)
{
 struct ti_ohci *VAR_8;
 int VAR_9;


 if (FUNC_6(VAR_7->driver->name, VAR_3))
  return;

 VAR_8 = (struct ti_ohci *)VAR_7->hostdata;

 if (!FUNC_3(&VAR_6, VAR_7, 0)) {
  FUNC_1(VAR_2, VAR_8->host->id, "Cannot allocate hostinfo");
  return;
 }

 FUNC_4(&VAR_6, VAR_7, VAR_8);
 FUNC_5(&VAR_6, VAR_7, VAR_8->host->id);

 VAR_9 = VAR_1 * 16 + VAR_8->host->id;
 FUNC_2(VAR_5, ((void*)0), FUNC_0(VAR_0, VAR_9),
        ((void*)0), "%s-%d", VAR_4, VAR_8->host->id);
}
