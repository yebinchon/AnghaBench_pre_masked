
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT16 ;
struct TYPE_9__ {TYPE_3__* sco_db; } ;
struct TYPE_10__ {TYPE_4__ sco_cb; } ;
struct TYPE_6__ {int bd_addr; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
struct TYPE_8__ {TYPE_2__ esco; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (size_t,int ,int ,int *) ;

void FUNC_1( UINT16 VAR_2 )
{
    FUNC_0(VAR_2, VAR_0,
                      VAR_1.sco_cb.sco_db[VAR_2].esco.data.bd_addr, ((void*)0));
}
