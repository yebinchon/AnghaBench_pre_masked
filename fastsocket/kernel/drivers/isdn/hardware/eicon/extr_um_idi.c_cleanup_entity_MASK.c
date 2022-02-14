
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Id; } ;
struct TYPE_5__ {int rc; int data; int status; scalar_t__ rc_count; TYPE_1__ e; int * adapter; int * os_ref; } ;
typedef TYPE_2__ divas_um_idi_entity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(divas_um_idi_entity_t * VAR_2)
{
 VAR_2->os_ref = ((void*)0);
 VAR_2->status = 0;
 VAR_2->adapter = ((void*)0);
 VAR_2->e.Id = 0;
 VAR_2->rc_count = 0;

 VAR_2->status |= VAR_0;
 VAR_2->status |= VAR_1;

 FUNC_0(&VAR_2->data);
 FUNC_0(&VAR_2->rc);
}
