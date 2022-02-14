
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ dlci; struct TYPE_4__* next; } ;
typedef TYPE_1__ pvc_device ;
typedef int hdlc_device ;
struct TYPE_5__ {TYPE_1__* first_pvc; } ;


 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static inline pvc_device* FUNC_1(hdlc_device *VAR_0, u16 VAR_1)
{
 pvc_device *VAR_2 = FUNC_0(VAR_0)->first_pvc;

 while (VAR_2) {
  if (VAR_2->dlci == VAR_1)
   return VAR_2;
  if (VAR_2->dlci > VAR_1)
   return ((void*)0);
  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}
