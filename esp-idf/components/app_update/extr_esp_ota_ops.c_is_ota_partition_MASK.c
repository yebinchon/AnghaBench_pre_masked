
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ subtype; } ;
typedef TYPE_1__ esp_partition_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(const esp_partition_t *VAR_3)
{
    return (VAR_3 != ((void*)0)
            && VAR_3->type == VAR_2
            && VAR_3->subtype >= VAR_0
            && VAR_3->subtype < VAR_1);
}
