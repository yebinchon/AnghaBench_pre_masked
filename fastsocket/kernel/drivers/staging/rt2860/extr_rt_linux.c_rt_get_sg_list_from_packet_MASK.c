
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int NumberOfElements; TYPE_1__* Elements; } ;
struct TYPE_6__ {int Length; int Address; } ;
typedef TYPE_2__ RTMP_SCATTER_GATHER_LIST ;
typedef TYPE_2__* PRTMP_SCATTER_GATHER_LIST ;
typedef int PNDIS_PACKET ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

PRTMP_SCATTER_GATHER_LIST
FUNC_2(PNDIS_PACKET VAR_0, RTMP_SCATTER_GATHER_LIST *VAR_1)
{
 VAR_1->NumberOfElements = 1;
 VAR_1->Elements[0].Address = FUNC_0(VAR_0);
 VAR_1->Elements[0].Length = FUNC_1(VAR_0);
 return (VAR_1);
}
