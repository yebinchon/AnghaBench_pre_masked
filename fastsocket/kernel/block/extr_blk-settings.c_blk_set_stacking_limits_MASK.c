
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {int discard_zeroes_data; void* max_sectors; void* max_hw_sectors; int max_segments; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct queue_limits*) ;

void FUNC_1(struct queue_limits *VAR_2)
{
 FUNC_0(VAR_2);


 VAR_2->discard_zeroes_data = 1;
 VAR_2->max_segments = VAR_1;
 VAR_2->max_hw_sectors = VAR_0;
 VAR_2->max_sectors = VAR_0;
}
