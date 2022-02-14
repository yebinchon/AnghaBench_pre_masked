
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct section {int entries_to_show; scalar_t__ show_all_entries; } ;
struct TYPE_6__ {size_t level; int * nb_item; TYPE_1__* writer; struct section** section; } ;
typedef TYPE_2__ WriterContext ;
struct TYPE_5__ {int (* print_integer ) (TYPE_2__*,char const*,long long) ;} ;


 scalar_t__ FUNC_0 (int ,char const*,int *,int ) ;
 int FUNC_1 (TYPE_2__*,char const*,long long) ;

__attribute__((used)) static inline void FUNC_2(WriterContext *VAR_0,
                                        const char *VAR_1, long long int VAR_2)
{
    const struct section *VAR_3 = VAR_0->section[VAR_0->level];

    if (VAR_3->show_all_entries || FUNC_0(VAR_3->entries_to_show, VAR_1, ((void*)0), 0)) {
        VAR_0->writer->print_integer(VAR_0, VAR_1, VAR_2);
        VAR_0->nb_item[VAR_0->level]++;
    }
}
