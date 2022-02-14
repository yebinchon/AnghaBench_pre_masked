
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int filesize; int fd; } ;
typedef TYPE_2__ LIBSMBContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int64_t FUNC_4(URLContext *VAR_4, int64_t VAR_5, int VAR_6)
{
    LIBSMBContext *VAR_7 = VAR_4->priv_data;
    int64_t VAR_8;

    if (VAR_6 == VAR_0) {
        if (VAR_7->filesize == -1) {
            FUNC_1(VAR_4, VAR_1, "Error during seeking: filesize is unknown.\n");
            return FUNC_0(VAR_2);
        } else
            return VAR_7->filesize;
    }

    if ((VAR_8 = FUNC_2(VAR_7->fd, VAR_5, VAR_6)) < 0) {
        int VAR_9 = VAR_3;
        FUNC_1(VAR_4, VAR_1, "Error during seeking: %s\n", FUNC_3(VAR_9));
        return FUNC_0(VAR_9);
    }

    return VAR_8;
}
