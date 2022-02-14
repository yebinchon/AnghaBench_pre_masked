
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int filename ;
struct TYPE_7__ {char* url; TYPE_1__* priv_data; } ;
struct TYPE_6__ {scalar_t__ remove_at_exit; } ;
typedef TYPE_1__ SmoothStreamingContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0)
{
    SmoothStreamingContext *VAR_1 = VAR_0->priv_data;
    FUNC_0(VAR_0, 1);

    if (VAR_1->remove_at_exit) {
        char VAR_2[1024];
        FUNC_3(VAR_2, sizeof(VAR_2), "%s/Manifest", VAR_0->url);
        FUNC_4(VAR_2);
        FUNC_2(VAR_0->url);
    }

    FUNC_1(VAR_0);
    return 0;
}
