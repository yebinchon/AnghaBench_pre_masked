
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kref {int dummy; } ;
typedef TYPE_1__* pdevice_extension_t ;
struct TYPE_4__ {size_t minor; } ;


 int FUNC_0 (TYPE_1__*) ;
 int ** VAR_0 ;
 TYPE_1__* FUNC_1 (struct kref*) ;

__attribute__((used)) static void FUNC_2(struct kref *VAR_1)
{
 pdevice_extension_t VAR_2 = FUNC_1(VAR_1);
 VAR_0[VAR_2->minor] = ((void*)0);
 FUNC_0(VAR_2);
}
