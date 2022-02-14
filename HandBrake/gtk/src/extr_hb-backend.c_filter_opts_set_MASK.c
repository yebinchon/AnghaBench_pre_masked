
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int signal_user_data_t ;
typedef int gchar ;
struct TYPE_2__ {int preset; int filter_id; } ;
typedef TYPE_1__ filter_opts_t ;


 int FUNC_0 (int *,int const*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(signal_user_data_t *VAR_0, const gchar *VAR_1,
                void *VAR_2, const void* VAR_3)
{
    filter_opts_t *VAR_4 = (filter_opts_t*)VAR_2;

    (void)VAR_3;
    FUNC_0(VAR_0, VAR_1, VAR_4->filter_id, VAR_4->preset);
}
