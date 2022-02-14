
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cache_size; scalar_t__ cache_offset; scalar_t__ sector_num; scalar_t__ sector_start; scalar_t__ path_depth; int valid; int pathname; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(void)
{
    FUNC_0(VAR_0.pathname, "");
    VAR_0.valid = VAR_1;
    VAR_0.path_depth = 0;
    VAR_0.sector_start = 0;
    VAR_0.sector_num = 0;
    VAR_0.cache_offset = 0;
    VAR_0.cache_size = 0;

    return VAR_2;
}
