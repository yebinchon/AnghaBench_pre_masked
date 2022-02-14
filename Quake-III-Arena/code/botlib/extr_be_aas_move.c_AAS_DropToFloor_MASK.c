
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_3__ {int* endpos; scalar_t__ startsolid; } ;
typedef TYPE_1__ bsp_trace_t ;


 TYPE_1__ FUNC_0 (int*,int*,int*,int*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5)
{
 vec3_t VAR_6;
 bsp_trace_t VAR_7;

 FUNC_1(VAR_3, VAR_6);
 VAR_6[2] -= 100;
 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, 0, VAR_0);
 if (VAR_7.startsolid) return VAR_1;
 FUNC_1(VAR_7.endpos, VAR_3);
 return VAR_2;
}
