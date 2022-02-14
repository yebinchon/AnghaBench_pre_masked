
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int fd; } ;
typedef TYPE_2__ LIBSMBContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_3, unsigned char *VAR_4, int VAR_5)
{
    LIBSMBContext *VAR_6 = VAR_3->priv_data;
    int VAR_7;

    if ((VAR_7 = FUNC_2(VAR_6->fd, VAR_4, VAR_5)) < 0) {
        int VAR_8 = FUNC_0(VAR_2);
        FUNC_1(VAR_3, VAR_1, "Read error: %s\n", FUNC_3(VAR_2));
        return VAR_8;
    }

    return VAR_7 ? VAR_7 : VAR_0;
}
