
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_10__ {int is_streamed; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_11__ {scalar_t__ state; scalar_t__ position; scalar_t__ filesize; scalar_t__ conn_data; } ;
typedef TYPE_2__ FTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (scalar_t__,unsigned char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,void*,int ) ;

__attribute__((used)) static int FUNC_8(URLContext *VAR_9, unsigned char *VAR_10, int VAR_11)
{
    FTPContext *VAR_12 = VAR_9->priv_data;
    int VAR_13, VAR_14, VAR_15 = 0;

    FUNC_2(VAR_9, "ftp protocol read %d bytes\n", VAR_11);
  retry:
    if (VAR_12->state == VAR_4) {

        if (VAR_12->position >= VAR_12->filesize)
            return VAR_0;
        if ((VAR_14 = FUNC_5(VAR_9)) < 0)
            return VAR_14;
    }
    if (VAR_12->state == VAR_7) {
        if (VAR_12->position >= VAR_12->filesize)
            return VAR_0;
        if ((VAR_14 = FUNC_6(VAR_12)) < 0)
            return VAR_14;
    }
    if (VAR_12->conn_data && VAR_12->state == VAR_5) {
        VAR_13 = FUNC_3(VAR_12->conn_data, VAR_10, VAR_11);
        if (VAR_13 >= 0) {
            VAR_12->position += VAR_13;
            if (VAR_12->position >= VAR_12->filesize) {


                int64_t VAR_16 = VAR_12->position;
                if (FUNC_4(VAR_9) < 0) {
                    VAR_12->position = VAR_16;
                    return FUNC_0(VAR_6);
                }
                VAR_12->position = VAR_16;
            }
        }
        if (VAR_13 <= 0 && VAR_12->position < VAR_12->filesize && !VAR_9->is_streamed) {

            int64_t VAR_17 = VAR_12->position;
            FUNC_1(VAR_9, VAR_3, "Reconnect to FTP server.\n");
            if ((VAR_14 = FUNC_4(VAR_9)) < 0)
                return VAR_14;
            if ((VAR_14 = FUNC_7(VAR_9, VAR_17, VAR_8)) < 0) {
                FUNC_1(VAR_9, VAR_2, "Position cannot be restored.\n");
                return VAR_14;
            }
            if (!VAR_15) {
                VAR_15 = 1;
                goto retry;
            }
        }
        return VAR_13;
    }

    FUNC_1(VAR_9, VAR_1, "FTP read failed\n");
    return FUNC_0(VAR_6);
}
