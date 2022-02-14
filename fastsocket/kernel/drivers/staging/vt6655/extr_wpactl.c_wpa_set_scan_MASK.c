
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct viawget_wpa_param {int dummy; } ;
struct TYPE_3__ {int lock; int bLinkPass; } ;
typedef TYPE_1__* PSDevice ;
typedef int HANDLE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(PSDevice VAR_1,
         struct viawget_wpa_param *VAR_2)
{
 int VAR_3 = 0;

    FUNC_2(&VAR_1->lock);
    FUNC_0((HANDLE)VAR_1, VAR_1->bLinkPass);
    FUNC_1((HANDLE) VAR_1, VAR_0, ((void*)0));
    FUNC_3(&VAR_1->lock);

    return VAR_3;
}
