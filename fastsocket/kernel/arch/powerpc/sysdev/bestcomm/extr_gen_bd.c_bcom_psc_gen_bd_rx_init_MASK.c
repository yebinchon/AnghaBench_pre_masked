
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcom_task {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int rx_ipr; int rx_initiator; } ;


 unsigned int VAR_0 ;
 struct bcom_task* FUNC_0 (int,int ,int ,int ,int) ;
 TYPE_1__* VAR_1 ;

struct bcom_task * FUNC_1(unsigned VAR_2, int VAR_3,
        phys_addr_t VAR_4, int VAR_5)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);

 return FUNC_0(VAR_3, VAR_4,
       VAR_1[VAR_2].rx_initiator,
       VAR_1[VAR_2].rx_ipr,
       VAR_5);
}
