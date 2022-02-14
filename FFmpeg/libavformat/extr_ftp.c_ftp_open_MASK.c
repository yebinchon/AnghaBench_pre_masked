
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int is_streamed; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {int write_seekable; } ;
typedef TYPE_2__ FTPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_3, const char *VAR_4, int VAR_5)
{
    FTPContext *VAR_6 = VAR_3->priv_data;
    int VAR_7;

    FUNC_1(VAR_3, "ftp protocol open\n");

    if ((VAR_7 = FUNC_3(VAR_3, VAR_4)) < 0)
        goto fail;

    if (FUNC_5(VAR_6, 0) < 0) {
        VAR_3->is_streamed = 1;
    } else {
        if (FUNC_4(VAR_6) < 0 && VAR_5 & VAR_0)
            VAR_3->is_streamed = 1;
        if (VAR_6->write_seekable != 1 && VAR_5 & VAR_1)
            VAR_3->is_streamed = 1;
    }

    return 0;

  fail:
    FUNC_0(VAR_3, VAR_2, "FTP open failed\n");
    FUNC_2(VAR_3);
    return VAR_7;
}
