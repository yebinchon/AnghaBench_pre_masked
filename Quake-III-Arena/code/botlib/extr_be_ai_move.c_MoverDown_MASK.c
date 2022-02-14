
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_4__ {int facenum; scalar_t__* start; } ;
typedef TYPE_1__ aas_reachability_t ;
struct TYPE_5__ {int (* Print ) (int ,char*,int) ;} ;


 int FUNC_0 (int,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int,scalar_t__*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(aas_reachability_t *VAR_4)
{
 int VAR_5;
 vec3_t VAR_6, VAR_7, VAR_8;
 vec3_t VAR_9 = {0, 0, 0};

 VAR_5 = VAR_4->facenum & 0x0000FFFF;

 FUNC_0(VAR_5, VAR_9, VAR_6, VAR_7, VAR_8);

 if (!FUNC_1(VAR_5, VAR_8))
 {
  VAR_1.Print(VAR_0, "no entity with model %d\n", VAR_5);
  return VAR_2;
 }

 if (VAR_8[2] + VAR_7[2] < VAR_4->start[2]) return VAR_3;
 return VAR_2;
}
