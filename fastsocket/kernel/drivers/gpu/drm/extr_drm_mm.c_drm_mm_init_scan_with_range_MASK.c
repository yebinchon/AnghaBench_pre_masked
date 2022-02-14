
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm {unsigned long scan_color; unsigned int scan_alignment; unsigned long scan_size; unsigned long scan_start; unsigned long scan_end; int scan_check_range; int * prev_scanned_node; scalar_t__ scan_hit_end; scalar_t__ scan_hit_start; scalar_t__ scanned_blocks; } ;



void FUNC_0(struct drm_mm *VAR_0,
     unsigned long VAR_1,
     unsigned VAR_2,
     unsigned long VAR_3,
     unsigned long VAR_4,
     unsigned long VAR_5)
{
 VAR_0->scan_color = VAR_3;
 VAR_0->scan_alignment = VAR_2;
 VAR_0->scan_size = VAR_1;
 VAR_0->scanned_blocks = 0;
 VAR_0->scan_hit_start = 0;
 VAR_0->scan_hit_end = 0;
 VAR_0->scan_start = VAR_4;
 VAR_0->scan_end = VAR_5;
 VAR_0->scan_check_range = 1;
 VAR_0->prev_scanned_node = ((void*)0);
}
