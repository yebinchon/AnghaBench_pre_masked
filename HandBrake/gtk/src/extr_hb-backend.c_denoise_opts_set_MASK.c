
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gchar ;
struct TYPE_7__ {int filter_id; int preset; } ;
typedef TYPE_2__ filter_opts_t ;


 int FUNC_0 (TYPE_1__*,int const*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*,char*,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(signal_user_data_t *VAR_0, const gchar *VAR_1,
               void *VAR_2, const void* VAR_3)
{
    (void)VAR_3;

    filter_opts_t *VAR_4 = (filter_opts_t*)VAR_2;
    VAR_4->filter_id = FUNC_2(VAR_0->settings,
                                             "PictureDenoiseFilter");
    FUNC_0(VAR_0, VAR_1, VAR_4->filter_id, VAR_4->preset);

    FUNC_1(VAR_0, "PictureDenoiseCustom",
                                  "denoise", VAR_4->filter_id);
}
