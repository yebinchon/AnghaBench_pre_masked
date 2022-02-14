
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {double width; double height; } ;
typedef TYPE_1__ ccv_size_t ;
struct TYPE_8__ {double x; double y; } ;
typedef TYPE_2__ ccv_decimal_point_t ;


 TYPE_2__ FUNC_0 (float,float) ;
 double FUNC_1 (double,double) ;

ccv_decimal_point_t FUNC_2(ccv_decimal_point_t VAR_0, ccv_size_t VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7, float VAR_8, float VAR_9, float VAR_10)
{
 VAR_2 *= 1.0 / FUNC_1(VAR_1.width, VAR_1.height);
 VAR_3 *= 1.0 / FUNC_1(VAR_1.width, VAR_1.height);
 VAR_4 *= 1.0 / FUNC_1(VAR_1.width, VAR_1.height);
 VAR_5 *= 1.0 / FUNC_1(VAR_1.width, VAR_1.height);
 VAR_6 *= 1.0 / FUNC_1(VAR_1.width, VAR_1.height);
 VAR_7 *= 1.0 / FUNC_1(VAR_1.width, VAR_1.height);
 VAR_8 *= 1.0 / (FUNC_1(VAR_1.width, VAR_1.height) * FUNC_1(VAR_1.width, VAR_1.height));
 VAR_9 *= 1.0 / (FUNC_1(VAR_1.width, VAR_1.height) * FUNC_1(VAR_1.width, VAR_1.height));
 VAR_10 *= 1.0 / FUNC_1(VAR_1.width, VAR_1.height);
 VAR_0.x -= VAR_1.width * 0.5;
 VAR_0.y -= VAR_1.height * 0.5;
 float VAR_11 = 1.0 / (VAR_0.x * VAR_8 + VAR_0.y * VAR_9 + VAR_10);
 float VAR_12 = VAR_1.width * 0.5 + (VAR_0.x * VAR_2 + VAR_0.y * VAR_3 + VAR_4) * VAR_11;
 float VAR_13 = VAR_1.height * 0.5 + (VAR_0.x * VAR_5 + VAR_0.y * VAR_6 + VAR_7) * VAR_11;
 return FUNC_0(VAR_12, VAR_13);
}
