
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vec3_t ;
typedef int bsp_trace_t ;
struct TYPE_2__ {int (* Trace ) (int *,int ,int ,int ,int ,int,int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int,int) ;

bsp_trace_t FUNC_1(vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4, int VAR_5, int VAR_6)
{
 bsp_trace_t VAR_7;
 VAR_0.Trace(&VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 return VAR_7;
}
