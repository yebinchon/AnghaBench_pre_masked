
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int footer ;
typedef int buf ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int end_chunked_post; TYPE_4__* hd; scalar_t__ listen; scalar_t__ chunked_post; } ;
typedef TYPE_2__ HTTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_3 (TYPE_4__*,char*,int) ;
 int FUNC_4 (TYPE_4__*,char*,int) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_5, int VAR_6)
{
    int VAR_7 = 0;
    char VAR_8[] = "0\r\n\r\n";
    HTTPContext *VAR_9 = VAR_5->priv_data;


    if (((VAR_6 & VAR_2) && VAR_9->chunked_post) ||
        ((VAR_6 & VAR_1) && VAR_9->chunked_post && VAR_9->listen)) {
        VAR_7 = FUNC_4(VAR_9->hd, VAR_8, sizeof(VAR_8) - 1);
        VAR_7 = VAR_7 > 0 ? 0 : VAR_7;

        if (!(VAR_6 & VAR_1)) {
            char VAR_10[1024];
            int VAR_11;
            VAR_9->hd->flags |= VAR_0;
            VAR_11 = FUNC_3(VAR_9->hd, VAR_10, sizeof(VAR_10));
            VAR_9->hd->flags &= ~VAR_0;
            if (VAR_11 < 0 && VAR_11 != FUNC_0(VAR_4)) {
                FUNC_2(VAR_5, VAR_3, "URL read error: %s\n", FUNC_1(VAR_11));
                VAR_7 = VAR_11;
            }
        }
        VAR_9->end_chunked_post = 1;
    }

    return VAR_7;
}
