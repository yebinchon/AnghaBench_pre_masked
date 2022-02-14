
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
typedef int temp ;
typedef int crlf ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int hd; int chunked_post; } ;
typedef TYPE_2__ HTTPContext ;


 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    char VAR_3[11] = "";
    int VAR_4;
    char VAR_5[] = "\r\n";
    HTTPContext *VAR_6 = VAR_0->priv_data;

    if (!VAR_6->chunked_post) {

        return FUNC_0(VAR_6->hd, VAR_1, VAR_2);
    }



    if (VAR_2 > 0) {

        FUNC_1(VAR_3, sizeof(VAR_3), "%x\r\n", VAR_2);

        if ((VAR_4 = FUNC_0(VAR_6->hd, VAR_3, FUNC_2(VAR_3))) < 0 ||
            (VAR_4 = FUNC_0(VAR_6->hd, VAR_1, VAR_2)) < 0 ||
            (VAR_4 = FUNC_0(VAR_6->hd, VAR_5, sizeof(VAR_5) - 1)) < 0)
            return VAR_4;
    }
    return VAR_2;
}
