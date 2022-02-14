
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int list; scalar_t__ send; scalar_t__ length; int * buf; } ;
typedef TYPE_1__ rndis_resp_t ;
struct TYPE_6__ {int resp_queue; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static rndis_resp_t *FUNC_2 (int VAR_2, u32 VAR_3)
{
 rndis_resp_t *VAR_4;


 VAR_4 = FUNC_0 (sizeof (rndis_resp_t) + VAR_3, VAR_0);
 if (!VAR_4) return ((void*)0);

 VAR_4->buf = (u8 *) (VAR_4 + 1);
 VAR_4->length = VAR_3;
 VAR_4->send = 0;

 FUNC_1 (&VAR_4->list,
  &(VAR_1 [VAR_2].resp_queue));
 return VAR_4;
}
