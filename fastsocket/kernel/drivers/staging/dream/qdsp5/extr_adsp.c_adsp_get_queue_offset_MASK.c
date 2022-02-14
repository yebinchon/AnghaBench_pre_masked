
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct adsp_info {size_t** queue_offset; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;

uint32_t FUNC_1(struct adsp_info *VAR_1, uint32_t VAR_2)
{
 FUNC_0(VAR_0 == -1UL);
 return VAR_1->queue_offset[VAR_0][VAR_2];
}
