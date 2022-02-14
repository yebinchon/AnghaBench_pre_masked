
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {int type; int origin; int radius; } ;
typedef TYPE_1__ bot_avoidspot_t ;
struct TYPE_6__ {int traveltype; int start; int end; } ;
typedef TYPE_2__ aas_reachability_t ;


 int VAR_0 ;
 int VAR_1 ;
 float FUNC_0 (int ,int ,int ) ;
 float FUNC_1 (int ) ;
 int VAR_2 ;
 float FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(vec3_t VAR_5, aas_reachability_t *VAR_6, bot_avoidspot_t *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 float VAR_12, VAR_13;

 switch(VAR_6->traveltype & VAR_2)
 {
  case 130: VAR_9 = VAR_4; break;
  case 140: VAR_9 = VAR_4; break;
  case 142: VAR_9 = VAR_4; break;
  case 134: VAR_9 = VAR_4; break;
  case 129: VAR_9 = VAR_3; break;
  case 136: VAR_9 = VAR_3; break;
  case 132: VAR_9 = VAR_4; break;
  case 128: VAR_9 = VAR_4; break;
  case 131: VAR_9 = VAR_3; break;
  case 139: VAR_9 = VAR_3; break;
  case 137: VAR_9 = VAR_3; break;
  case 133: VAR_9 = VAR_3; break;
  case 141: VAR_9 = VAR_3; break;
  case 135: VAR_9 = VAR_3; break;
  case 138: VAR_9 = VAR_3; break;
  default: VAR_9 = VAR_4; break;
 }

 VAR_11 = VAR_1;
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
 {
  VAR_13 = FUNC_1(VAR_7[VAR_10].radius);
  VAR_12 = FUNC_0(VAR_7[VAR_10].origin, VAR_5, VAR_6->start);

  if (VAR_12 < VAR_13 &&
   FUNC_2(VAR_7[VAR_10].origin, VAR_5) > VAR_12)
  {
   VAR_11 = VAR_7[VAR_10].type;
  }
  else if (VAR_9) {
   VAR_12 = FUNC_0(VAR_7[VAR_10].origin, VAR_6->start, VAR_6->end);

   if (VAR_12 < VAR_13 &&
    FUNC_2(VAR_7[VAR_10].origin, VAR_6->start) > VAR_12)
   {
    VAR_11 = VAR_7[VAR_10].type;
   }
  }
  else
  {
   FUNC_2(VAR_7[VAR_10].origin, VAR_6->end);

   if (VAR_12 < VAR_13 &&
    FUNC_2(VAR_7[VAR_10].origin, VAR_6->start) > VAR_12)
   {
    VAR_11 = VAR_7[VAR_10].type;
   }
  }
  if (VAR_11 == VAR_0)
   return VAR_11;
 }
 return VAR_11;
}
