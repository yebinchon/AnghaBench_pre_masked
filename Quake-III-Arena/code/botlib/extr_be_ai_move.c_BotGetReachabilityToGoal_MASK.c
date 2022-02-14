
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct bot_avoidspot_s {int dummy; } ;
struct TYPE_8__ {int areanum; } ;
typedef TYPE_1__ bot_goal_t ;
struct TYPE_9__ {int areanum; scalar_t__ traveltime; int end; } ;
typedef TYPE_2__ aas_reachability_t ;
struct TYPE_10__ {int (* Print ) (int ,char*,int) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,TYPE_2__*) ;
 float FUNC_4 () ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*,struct bot_avoidspot_s*,int) ;
 int FUNC_6 (int ,TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_7 (int ,char*,int) ;

int FUNC_8(vec3_t VAR_7, int VAR_8,
           int VAR_9, int VAR_10,
           int *VAR_11, float *VAR_12, int *VAR_13,
           bot_goal_t *VAR_14, int VAR_15, int VAR_16,
           struct bot_avoidspot_s *VAR_17, int VAR_18, int *VAR_19)
{
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 aas_reachability_t VAR_25;


 if (!VAR_8) return 0;

 if (FUNC_0(VAR_8) || FUNC_0(VAR_14->areanum))
 {
  VAR_15 |= VAR_4;
  VAR_16 |= VAR_4;
 }

 VAR_22 = 0;
 VAR_23 = 0;

 for (VAR_24 = FUNC_2(VAR_8, 0); VAR_24;
  VAR_24 = FUNC_2(VAR_8, VAR_24))
 {
  FUNC_3(VAR_24, &VAR_25);


  if (VAR_9 == VAR_14->areanum && VAR_25.areanum == VAR_10) continue;


  if (!FUNC_6(VAR_7, &VAR_25, VAR_16)) continue;

  VAR_21 = FUNC_1(VAR_25.areanum, VAR_25.end, VAR_14->areanum, VAR_15);

  if (!VAR_21) continue;

  if (FUNC_5(VAR_7, &VAR_25, VAR_17, VAR_18)) {
   if (VAR_19) {
    *VAR_19 |= VAR_2;
   }
   continue;
  }

  VAR_21 += VAR_25.traveltime;

  if (!VAR_22 || VAR_21 < VAR_22)
  {
   VAR_22 = VAR_21;
   VAR_23 = VAR_24;
  }
 }

 return VAR_23;
}
