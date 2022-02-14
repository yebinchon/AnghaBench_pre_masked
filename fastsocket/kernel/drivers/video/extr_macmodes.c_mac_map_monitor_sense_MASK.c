
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct monitor_map {int sense; int vmode; } ;


 struct monitor_map* VAR_0 ;

int FUNC_0(int VAR_1)
{
    const struct monitor_map *VAR_2;

    for (VAR_2 = VAR_0; VAR_2->sense != -1; VAR_2++)
 if (VAR_2->sense == VAR_1)
     break;
    return VAR_2->vmode;
}
