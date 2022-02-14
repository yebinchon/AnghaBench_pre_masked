
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ lastCluster; } ;
struct TYPE_6__ {TYPE_1__ fat; } ;
typedef TYPE_2__ PARTITION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;

unsigned int FUNC_1 (PARTITION* VAR_2)
{
 unsigned int VAR_3 = 0;
 uint32_t VAR_4;

 for (VAR_4 = VAR_0; VAR_4 <= VAR_2->fat.lastCluster; VAR_4++)
   {
  if (FUNC_0(VAR_2, VAR_4) == VAR_1)
   VAR_3++;
 }

 return VAR_3;
}
