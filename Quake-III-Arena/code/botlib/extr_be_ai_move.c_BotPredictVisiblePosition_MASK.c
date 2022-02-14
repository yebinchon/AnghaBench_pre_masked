
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {int areanum; int origin; int entitynum; } ;
typedef TYPE_1__ bot_goal_t ;
struct TYPE_7__ {int areanum; int end; int start; } ;
typedef TYPE_2__ aas_reachability_t ;


 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (int ,int,int,int,int*,float*,int*,TYPE_1__*,int,int,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int*,int ,int) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(vec3_t VAR_3, int VAR_4, bot_goal_t *VAR_5, int VAR_6, vec3_t VAR_7)
{
 aas_reachability_t VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13[VAR_0];
 float VAR_14[VAR_0];
 int VAR_15[VAR_0];
 vec3_t VAR_16;


 if (!VAR_5) return VAR_1;

 if (!VAR_4) return VAR_1;

 if (!VAR_5->areanum) return VAR_1;

 FUNC_3(VAR_13, 0, VAR_0 * sizeof(int));
 VAR_10 = VAR_5->areanum;
 VAR_11 = VAR_4;
 FUNC_4(VAR_3, VAR_16);

 for (VAR_12 = 0; VAR_12 < 20 && (VAR_4 != VAR_5->areanum); VAR_12++)
 {

  VAR_9 = FUNC_1(VAR_16, VAR_4,
      VAR_10, VAR_11,
       VAR_13, VAR_14, VAR_15,
         VAR_5, VAR_6, VAR_6, ((void*)0), 0, ((void*)0));
  if (!VAR_9) return VAR_1;
  FUNC_0(VAR_9, &VAR_8);

  if (FUNC_2(VAR_5->entitynum, VAR_5->origin, VAR_8.start))
  {
   FUNC_4(VAR_8.start, VAR_7);
   return VAR_2;
  }

  if (FUNC_2(VAR_5->entitynum, VAR_5->origin, VAR_8.end))
  {
   FUNC_4(VAR_8.end, VAR_7);
   return VAR_2;
  }

  if (VAR_8.areanum == VAR_5->areanum)
  {
   FUNC_4(VAR_8.end, VAR_7);
   return VAR_2;
  }

  VAR_11 = VAR_4;
  VAR_4 = VAR_8.areanum;
  FUNC_4(VAR_8.end, VAR_16);

 }

 return VAR_1;
}
