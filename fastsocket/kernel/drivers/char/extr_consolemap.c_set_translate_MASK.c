
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; } ;


 int* VAR_0 ;
 unsigned short** VAR_1 ;

unsigned short *FUNC_0(int VAR_2, struct vc_data *VAR_3)
{
 VAR_0[VAR_3->vc_num] = VAR_2;
 return VAR_1[VAR_2];
}
