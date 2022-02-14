
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* window_handle_t ;
struct TYPE_8__ {int CardOffset; scalar_t__ Page; } ;
typedef TYPE_3__ memreq_t ;
struct TYPE_6__ {int card_start; } ;
struct TYPE_7__ {scalar_t__ magic; TYPE_1__ ctl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(window_handle_t VAR_2, memreq_t *VAR_3)
{
 if ((VAR_2 == ((void*)0)) || (VAR_2->magic != VAR_1))
  return -VAR_0;
 VAR_3->Page = 0;
 VAR_3->CardOffset = VAR_2->ctl.card_start;
 return 0;
}
