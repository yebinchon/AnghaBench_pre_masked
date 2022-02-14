
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numpoints; scalar_t__** points; } ;
typedef TYPE_1__ winding_t ;
typedef scalar_t__ vec_t ;
typedef int vec3_t ;
typedef scalar_t__ qboolean ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int ) ;
 double FUNC_6 (scalar_t__) ;

winding_t *FUNC_7 (winding_t *VAR_1, winding_t *VAR_2, vec3_t VAR_3)
{
 vec_t *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 winding_t *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 vec3_t VAR_14, VAR_15;
 vec_t VAR_16;
 qboolean VAR_17, VAR_18;





 VAR_4 = VAR_5 = ((void*)0);
 VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_1->numpoints; VAR_10++)
 {
  VAR_4 = VAR_1->points[VAR_10];
  VAR_5 = VAR_1->points[(VAR_10+1) % VAR_1->numpoints];
  for (VAR_11 = 0; VAR_11 < VAR_2->numpoints; VAR_11++)
  {
   VAR_6 = VAR_2->points[VAR_11];
   VAR_7 = VAR_2->points[(VAR_11+1) % VAR_2->numpoints];
   for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
   {
    if (FUNC_6(VAR_4[VAR_12] - VAR_7[VAR_12]) > 0.1)
     break;
    if (FUNC_6(VAR_5[VAR_12] - VAR_6[VAR_12]) > 0.1)
     break;
   }
   if (VAR_12==3)
    break;
  }
  if (VAR_11 < VAR_2->numpoints)
   break;
 }

 if (VAR_10 == VAR_1->numpoints)
  return ((void*)0);





 VAR_8 = VAR_1->points[(VAR_10+VAR_1->numpoints-1)%VAR_1->numpoints];
 FUNC_5 (VAR_4, VAR_8, VAR_15);
 FUNC_0 (VAR_3, VAR_15, VAR_14);
 FUNC_4 (VAR_14, VAR_14);

 VAR_8 = VAR_2->points[(VAR_11+2)%VAR_2->numpoints];
 FUNC_5 (VAR_8, VAR_4, VAR_15);
 VAR_16 = FUNC_1 (VAR_15, VAR_14);
 if (VAR_16 > VAR_0)
  return ((void*)0);
 VAR_17 = (qboolean)(VAR_16 < -VAR_0);

 VAR_8 = VAR_1->points[(VAR_10+2)%VAR_1->numpoints];
 FUNC_5 (VAR_8, VAR_5, VAR_15);
 FUNC_0 (VAR_3, VAR_15, VAR_14);
 FUNC_4 (VAR_14, VAR_14);

 VAR_8 = VAR_2->points[(VAR_11+VAR_2->numpoints-1)%VAR_2->numpoints];
 FUNC_5 (VAR_8, VAR_5, VAR_15);
 VAR_16 = FUNC_1 (VAR_15, VAR_14);
 if (VAR_16 > VAR_0)
  return ((void*)0);
 VAR_18 = (qboolean)(VAR_16 < -VAR_0);




 VAR_9 = FUNC_2 (VAR_1->numpoints + VAR_2->numpoints);


 for (VAR_12=(VAR_10+1)%VAR_1->numpoints ; VAR_12 != VAR_10 ; VAR_12=(VAR_12+1)%VAR_1->numpoints)
 {
  if (VAR_12==(VAR_10+1)%VAR_1->numpoints && !VAR_18)
   continue;

  FUNC_3 (VAR_1->points[VAR_12], VAR_9->points[VAR_9->numpoints]);
  VAR_9->numpoints++;
 }


 for (VAR_13= (VAR_11+1)%VAR_2->numpoints ; VAR_13 != VAR_11 ; VAR_13=(VAR_13+1)%VAR_2->numpoints)
 {
  if (VAR_13==(VAR_11+1)%VAR_2->numpoints && !VAR_17)
   continue;
  FUNC_3 (VAR_2->points[VAR_13], VAR_9->points[VAR_9->numpoints]);
  VAR_9->numpoints++;
 }

 return VAR_9;
}
