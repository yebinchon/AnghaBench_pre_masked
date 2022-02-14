
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct delta_frame {int crc; int frame; } ;
typedef int payload ;
struct TYPE_5__ {size_t connections_size; TYPE_3__* connections; } ;
typedef TYPE_1__ netplay_t ;
struct TYPE_6__ {scalar_t__ mode; scalar_t__ active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_3__*,int ,int *,int) ;

bool FUNC_2(netplay_t *VAR_2, struct delta_frame *VAR_3)
{
   uint32_t VAR_4[2];
   bool VAR_5 = 1;
   size_t VAR_6;
   VAR_4[0] = FUNC_0(VAR_3->frame);
   VAR_4[1] = FUNC_0(VAR_3->crc);
   for (VAR_6 = 0; VAR_6 < VAR_2->connections_size; VAR_6++)
   {
      if (VAR_2->connections[VAR_6].active &&
            VAR_2->connections[VAR_6].mode >= VAR_1)
         VAR_5 = FUNC_1(VAR_2, &VAR_2->connections[VAR_6],
            VAR_0, VAR_4, sizeof(VAR_4)) && VAR_5;
   }
   return VAR_5;
}
