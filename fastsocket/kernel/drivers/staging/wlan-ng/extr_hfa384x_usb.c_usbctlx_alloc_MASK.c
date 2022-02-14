
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int done; } ;
typedef TYPE_1__ hfa384x_usbctlx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static hfa384x_usbctlx_t *FUNC_4(void)
{
 hfa384x_usbctlx_t *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), FUNC_0()? VAR_0 : VAR_1);
 if (VAR_2 != ((void*)0)) {
  FUNC_3(VAR_2, 0, sizeof(*VAR_2));
  FUNC_1(&VAR_2->done);
 }

 return VAR_2;
}
