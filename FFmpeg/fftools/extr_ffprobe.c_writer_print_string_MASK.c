
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct section {int unique_name; int entries_to_show; scalar_t__ show_all_entries; } ;
struct TYPE_9__ {size_t level; int * nb_item; TYPE_1__* writer; struct section** section; } ;
typedef TYPE_2__ WriterContext ;
struct TYPE_8__ {int flags; int (* print_string ) (TYPE_2__*,char const*,char const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char const*,int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,char const*,char const*,int ) ;
 int FUNC_3 (TYPE_2__*,char*,char*) ;
 int FUNC_4 (TYPE_2__*,char const*,char const*) ;
 int FUNC_5 (TYPE_2__*,char**,char const*) ;

__attribute__((used)) static inline int FUNC_6(WriterContext *VAR_4,
                                      const char *VAR_5, const char *VAR_6, int VAR_7)
{
    const struct section *VAR_8 = VAR_4->section[VAR_4->level];
    int VAR_9 = 0;

    if ((VAR_7 & VAR_1)
        && !(VAR_4->writer->flags & VAR_3))
        return 0;

    if (VAR_8->show_all_entries || FUNC_0(VAR_8->entries_to_show, VAR_5, ((void*)0), 0)) {
        if (VAR_7 & VAR_2) {
            char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
            VAR_9 = FUNC_5(VAR_4, &VAR_10, VAR_5);
            if (VAR_9 < 0) goto end;
            VAR_9 = FUNC_5(VAR_4, &VAR_11, VAR_6);
            if (VAR_9 < 0) goto end;
            VAR_4->writer->print_string(VAR_4, VAR_10, VAR_11);
        end:
            if (VAR_9 < 0) {
                FUNC_2(VAR_4, VAR_0,
                       "Invalid key=value string combination %s=%s in section %s\n",
                       VAR_5, VAR_6, VAR_8->unique_name);
            }
            FUNC_1(VAR_10);
            FUNC_1(VAR_11);
        } else {
            VAR_4->writer->print_string(VAR_4, VAR_5, VAR_6);
        }

        VAR_4->nb_item[VAR_4->level]++;
    }

    return VAR_9;
}
