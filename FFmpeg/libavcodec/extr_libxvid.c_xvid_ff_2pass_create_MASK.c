
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ param; } ;
typedef TYPE_2__ xvid_plg_create_t ;
struct xvid_ff_pass1 {TYPE_1__* context; } ;
struct TYPE_4__ {char* twopassbuffer; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,char*,...) ;

__attribute__((used)) static int FUNC_6(xvid_plg_create_t *VAR_2, void **VAR_3)
{
    struct xvid_ff_pass1 *VAR_4 = (struct xvid_ff_pass1 *) VAR_2->param;
    char *VAR_5 = VAR_4->context->twopassbuffer;


    if (!VAR_5)
        return VAR_0;



    VAR_5[0] = 0;
    FUNC_5(VAR_5, FUNC_1(VAR_5),
             "# ffmpeg 2-pass log file, using xvid codec\n");
    FUNC_5(FUNC_0(VAR_5), FUNC_1(VAR_5),
             "# Do not modify. libxvidcore version: %d.%d.%d\n\n",
             FUNC_2(VAR_1),
             FUNC_3(VAR_1),
             FUNC_4(VAR_1));

    *VAR_3 = VAR_4->context;
    return 0;
}
