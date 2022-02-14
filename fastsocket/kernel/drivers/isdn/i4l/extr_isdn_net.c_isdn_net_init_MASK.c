
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ushort ;
struct net_device {scalar_t__ hard_header_len; } ;
struct TYPE_6__ {TYPE_2__** drv; } ;
struct TYPE_5__ {TYPE_1__* interface; } ;
struct TYPE_4__ {scalar_t__ hl_hdrlen; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct net_device *VAR_3)
{
 ushort VAR_4 = 0;
 int VAR_5;






 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_2->drv[VAR_5])
   if (VAR_4 < VAR_2->drv[VAR_5]->interface->hl_hdrlen)
    VAR_4 = VAR_2->drv[VAR_5]->interface->hl_hdrlen;

 VAR_3->hard_header_len = VAR_0 + VAR_4;
 return 0;
}
