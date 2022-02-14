
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wlandevice_t ;
struct TYPE_7__ {int framelen; } ;
struct TYPE_5__ {TYPE_3__ info; } ;
struct TYPE_6__ {TYPE_1__ infofrm; } ;
typedef TYPE_2__ hfa384x_usbin_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(wlandevice_t *VAR_0, hfa384x_usbin_t *VAR_1)
{
 VAR_1->infofrm.info.framelen =
     FUNC_0(VAR_1->infofrm.info.framelen);
 FUNC_1(VAR_0, &VAR_1->infofrm.info);
}
