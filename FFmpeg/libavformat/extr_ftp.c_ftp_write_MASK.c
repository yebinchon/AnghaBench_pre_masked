
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {scalar_t__ state; int position; int filesize; scalar_t__ conn_data; } ;
typedef TYPE_2__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (scalar_t__,unsigned char const*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_5, const unsigned char *VAR_6, int VAR_7)
{
    int VAR_8;
    FTPContext *VAR_9 = VAR_5->priv_data;
    int VAR_10;

    FUNC_3(VAR_5, "ftp protocol write %d bytes\n", VAR_7);

    if (VAR_9->state == VAR_1) {
        if ((VAR_8 = FUNC_5(VAR_5)) < 0)
            return VAR_8;
    }
    if (VAR_9->state == VAR_3) {
        if ((VAR_8 = FUNC_6(VAR_9)) < 0)
            return VAR_8;
    }
    if (VAR_9->conn_data && VAR_9->state == VAR_4) {
        VAR_10 = FUNC_4(VAR_9->conn_data, VAR_6, VAR_7);
        if (VAR_10 > 0) {
            VAR_9->position += VAR_10;
            VAR_9->filesize = FUNC_1(VAR_9->filesize, VAR_9->position);
        }
        return VAR_10;
    }

    FUNC_2(VAR_5, VAR_0, "FTP write failed\n");
    return FUNC_0(VAR_2);
}
