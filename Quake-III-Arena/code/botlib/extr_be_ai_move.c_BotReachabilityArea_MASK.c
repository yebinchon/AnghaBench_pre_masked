
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_7__ {int fraction; scalar_t__ ent; int startsolid; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_8__ {int* endpos; int startsolid; } ;
typedef TYPE_2__ aas_trace_t ;
struct TYPE_9__ {int areanum; } ;
typedef TYPE_3__ aas_reachability_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int*,int*) ;
 int FUNC_4 (int,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int*) ;
 TYPE_1__ FUNC_6 (int*,int*,int*,int*,int,int) ;
 TYPE_2__ FUNC_7 (int*,int*,int ,int) ;
 int FUNC_8 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int*,int*) ;
 int FUNC_10 (int*,int,int*,int*) ;
 int* VAR_7 ;

int FUNC_11(vec3_t VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 aas_reachability_t VAR_14;
 vec3_t VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = {0, 0, 1};
 bsp_trace_t VAR_20;
 aas_trace_t VAR_21;


 FUNC_3(VAR_6, VAR_17, VAR_18);
 FUNC_10(VAR_8, -3, VAR_19, VAR_16);
 VAR_20 = FUNC_6(VAR_8, VAR_17, VAR_18, VAR_16, VAR_9, VAR_1|VAR_0);
 if (!VAR_20.startsolid && VAR_20.fraction < 1 && VAR_20.ent != VAR_2)
 {

  if (VAR_20.ent == VAR_3)
  {
   return FUNC_8(VAR_8);
  }

  VAR_10 = FUNC_1(VAR_20.ent);
  VAR_11 = VAR_7[VAR_10];



  if (VAR_11 == VAR_5 || VAR_11 == VAR_4)
  {
   VAR_12 = FUNC_2(0, VAR_10);
   if (VAR_12)
   {
    FUNC_4(VAR_12, &VAR_14);
    return VAR_14.areanum;
   }
  }


  if (FUNC_5(VAR_8))
  {
   return FUNC_8(VAR_8);
  }

  VAR_13 = FUNC_8(VAR_8);

  if (VAR_13 && FUNC_0(VAR_13)) return VAR_13;

  FUNC_9(VAR_8, VAR_15);
  FUNC_9(VAR_15, VAR_16);
  VAR_16[2] -= 800;
  VAR_21 = FUNC_7(VAR_15, VAR_16, VAR_6, -1);
  if (!VAR_21.startsolid)
  {
   FUNC_9(VAR_21.endpos, VAR_15);
  }

  return FUNC_8(VAR_15);
 }

 return FUNC_8(VAR_8);
}
