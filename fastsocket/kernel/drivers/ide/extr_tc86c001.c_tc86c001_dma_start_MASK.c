
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long config_data; int * expiry; int rq; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {scalar_t__ dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_2->hwif;
 unsigned long VAR_4 = VAR_3->config_data;
 unsigned long VAR_5 = VAR_4 + (VAR_2->dn ? 0x06 : 0x04);
 unsigned long VAR_6 = FUNC_0(VAR_3->rq);






 FUNC_3(VAR_6, VAR_4 + 0x0a);
 FUNC_3(VAR_0 / 2, VAR_5);


 FUNC_2(VAR_3, VAR_3->expiry);
 VAR_3->expiry = &VAR_1;

 FUNC_1(VAR_2);
}
