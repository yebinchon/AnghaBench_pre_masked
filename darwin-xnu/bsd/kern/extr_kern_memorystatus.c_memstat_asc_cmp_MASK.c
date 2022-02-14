
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ msi_page_count; } ;
typedef TYPE_1__ memstat_sort_info_t ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
        const memstat_sort_info_t *VAR_2 = (const memstat_sort_info_t *)VAR_0;
        const memstat_sort_info_t *VAR_3 = (const memstat_sort_info_t *)VAR_1;

        return (int)((uint64_t)VAR_2->msi_page_count - (uint64_t)VAR_3->msi_page_count);
}
