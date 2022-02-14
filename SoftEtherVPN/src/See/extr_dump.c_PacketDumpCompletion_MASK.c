
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int UserEvent; int IoStatus; int * UserIosb; } ;
typedef int PVOID ;
typedef TYPE_1__* PIRP ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static NTSTATUS FUNC_1(PDEVICE_OBJECT VAR_2,
                                PIRP VAR_3,
                                PVOID VAR_4)
{


    *VAR_3->UserIosb = VAR_3->IoStatus;


    FUNC_0(VAR_3->UserEvent, 0, VAR_0);

    return VAR_1;
}
