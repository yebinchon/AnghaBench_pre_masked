
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_7__ {int faceflags; int winding; TYPE_2__* frontarea; struct TYPE_7__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_8__ {int areanum; TYPE_1__* tmpfaces; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_9__ {int * phys_gravitydirection; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*,int *,float,int*,int*,int*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int *,float*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_3__ VAR_1 ;

int FUNC_8(tmp_area_t *VAR_2, vec3_t VAR_3, float *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 float VAR_12, VAR_13;
 tmp_face_t *VAR_14, *VAR_15;
 vec3_t VAR_16, VAR_17;
 float VAR_18;


 FUNC_5(VAR_1.phys_gravitydirection, VAR_17);
 FUNC_6(VAR_17);

 VAR_7 = 0;
 VAR_12 = -999999;
 VAR_11 = 0;




 for (VAR_14 = VAR_2->tmpfaces; VAR_14; VAR_14 = VAR_14->next[VAR_5])
 {

  VAR_5 = VAR_14->frontarea != VAR_2;

  if (FUNC_7(VAR_14->winding))
  {
   FUNC_4("gsubdiv: area %d has a tiny winding\r\n", VAR_2->areanum);
   continue;
  }

  if (!(VAR_14->faceflags & VAR_0) && !FUNC_0(VAR_14, VAR_5)) continue;

  for (VAR_15 = VAR_14->next[VAR_5]; VAR_15; VAR_15 = VAR_15->next[VAR_6])
  {

   VAR_6 = VAR_15->frontarea != VAR_2;

   if (FUNC_7(VAR_14->winding))
   {
    FUNC_4("gsubdiv: area %d has a tiny winding\r\n", VAR_2->areanum);
    continue;
   }

   if (!(VAR_15->faceflags & VAR_0) && !FUNC_0(VAR_15, VAR_6)) continue;

   if (!(((VAR_14->faceflags & VAR_0) && FUNC_0(VAR_15, VAR_6)) ||
     ((VAR_15->faceflags & VAR_0) && FUNC_0(VAR_14, VAR_5)))) continue;

   if (!FUNC_2(VAR_14->winding, VAR_15->winding, VAR_17,
              VAR_16, &VAR_18)) continue;





   if (!FUNC_1(VAR_2, VAR_16, VAR_18,
          &VAR_8, &VAR_9, &VAR_10))
   {
    continue;
   }




   VAR_13 = 100 - VAR_8 - 2 * VAR_9;

   VAR_13 += VAR_10 * -1000;
   if (VAR_13 > VAR_12)
   {
    FUNC_5(VAR_16, VAR_3);
    *VAR_4 = VAR_18;
    VAR_12 = VAR_13;
    VAR_11 = VAR_10;
    VAR_7 = 1;
   }
  }
 }
 if (VAR_11)
 {
  FUNC_4("found %d epsilon faces trying to split area %d\r\n",
         VAR_10, VAR_2->areanum);
 }
 return VAR_7;
}
