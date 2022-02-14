
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_iso_context {TYPE_2__* card; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* start_iso ) (struct fw_iso_context*,int,int,int) ;} ;


 int FUNC_0 (struct fw_iso_context*,int,int,int) ;

int FUNC_1(struct fw_iso_context *VAR_0,
    int VAR_1, int VAR_2, int VAR_3)
{
 return VAR_0->card->driver->start_iso(VAR_0, VAR_1, VAR_2, VAR_3);
}
