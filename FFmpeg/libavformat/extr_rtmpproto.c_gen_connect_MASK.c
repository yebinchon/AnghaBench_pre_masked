
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int URLContext ;
struct TYPE_9__ {double nb_invokes; char* flashver; char* swfurl; char* swfverify; char* pageurl; char* conn; scalar_t__ is_input; int auth_params; int tcurl; int app; } ;
struct TYPE_8__ {int size; int * data; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMPContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int **,char*) ;
 int FUNC_2 (int **,double) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int **,char*) ;
 int FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_10 (int *,char*,int **) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static int FUNC_13(URLContext *VAR_3, RTMPContext *VAR_4)
{
    RTMPPacket VAR_5;
    uint8_t *VAR_6;
    int VAR_7;

    if ((VAR_7 = FUNC_7(&VAR_5, VAR_2, VAR_1,
                                     0, 4096 + VAR_0)) < 0)
        return VAR_7;

    VAR_6 = VAR_5.data;

    FUNC_5(&VAR_6, "connect");
    FUNC_2(&VAR_6, ++VAR_4->nb_invokes);
    FUNC_4(&VAR_6);
    FUNC_1(&VAR_6, "app");
    FUNC_6(&VAR_6, VAR_4->app, VAR_4->auth_params);

    if (!VAR_4->is_input) {
        FUNC_1(&VAR_6, "type");
        FUNC_5(&VAR_6, "nonprivate");
    }
    FUNC_1(&VAR_6, "flashVer");
    FUNC_5(&VAR_6, VAR_4->flashver);

    if (VAR_4->swfurl || VAR_4->swfverify) {
        FUNC_1(&VAR_6, "swfUrl");
        if (VAR_4->swfurl)
            FUNC_5(&VAR_6, VAR_4->swfurl);
        else
            FUNC_5(&VAR_6, VAR_4->swfverify);
    }

    FUNC_1(&VAR_6, "tcUrl");
    FUNC_6(&VAR_6, VAR_4->tcurl, VAR_4->auth_params);
    if (VAR_4->is_input) {
        FUNC_1(&VAR_6, "fpad");
        FUNC_0(&VAR_6, 0);
        FUNC_1(&VAR_6, "capabilities");
        FUNC_2(&VAR_6, 15.0);




        FUNC_1(&VAR_6, "audioCodecs");
        FUNC_2(&VAR_6, 4071.0);
        FUNC_1(&VAR_6, "videoCodecs");
        FUNC_2(&VAR_6, 252.0);
        FUNC_1(&VAR_6, "videoFunction");
        FUNC_2(&VAR_6, 1.0);

        if (VAR_4->pageurl) {
            FUNC_1(&VAR_6, "pageUrl");
            FUNC_5(&VAR_6, VAR_4->pageurl);
        }
    }
    FUNC_3(&VAR_6);

    if (VAR_4->conn) {
        char *VAR_8 = VAR_4->conn;


        while (VAR_8) {
            char *VAR_9;
            VAR_8 += FUNC_12(VAR_8, " ");
            if (!*VAR_8)
                break;
            VAR_9 = FUNC_11(VAR_8, ' ');
            if (VAR_9)
                *VAR_9 = '\0';
            if ((VAR_7 = FUNC_10(VAR_3, VAR_8, &VAR_6)) < 0) {

                FUNC_8(&VAR_5);
                return VAR_7;
            }

            if (VAR_9)
                VAR_8 = VAR_9 + 1;
            else
                break;
        }
    }

    VAR_5.size = VAR_6 - VAR_5.data;

    return FUNC_9(VAR_4, &VAR_5, 1);
}
