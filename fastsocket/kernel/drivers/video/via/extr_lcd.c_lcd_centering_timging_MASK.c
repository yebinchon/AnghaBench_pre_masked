
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_timing {int hor_addr; int hor_blank_start; int hor_sync_start; int ver_addr; int ver_blank_start; int ver_sync_start; int ver_sync_end; int ver_blank_end; int ver_total; int hor_sync_end; int hor_blank_end; int hor_total; } ;



__attribute__((used)) static struct display_timing FUNC_0(struct display_timing
         VAR_0,
         struct display_timing VAR_1)
{
 struct display_timing VAR_2;

 VAR_2.hor_total = VAR_1.hor_total;
 VAR_2.hor_addr = VAR_0.hor_addr;
 VAR_2.hor_blank_start =
     (VAR_1.hor_addr - VAR_0.hor_addr) / 2 +
     VAR_2.hor_addr;
 VAR_2.hor_blank_end = VAR_1.hor_blank_end;
 VAR_2.hor_sync_start =
     (VAR_1.hor_sync_start -
      VAR_1.hor_blank_start) + VAR_2.hor_blank_start;
 VAR_2.hor_sync_end = VAR_1.hor_sync_end;

 VAR_2.ver_total = VAR_1.ver_total;
 VAR_2.ver_addr = VAR_0.ver_addr;
 VAR_2.ver_blank_start =
     (VAR_1.ver_addr - VAR_0.ver_addr) / 2 +
     VAR_2.ver_addr;
 VAR_2.ver_blank_end = VAR_1.ver_blank_end;
 VAR_2.ver_sync_start =
     (VAR_1.ver_sync_start -
      VAR_1.ver_blank_start) + VAR_2.ver_blank_start;
 VAR_2.ver_sync_end = VAR_1.ver_sync_end;

 return VAR_2;
}
