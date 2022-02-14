
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int file; } ;
typedef TYPE_2__ LIBSSHContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_3, unsigned char *VAR_4, int VAR_5)
{
    LIBSSHContext *VAR_6 = VAR_3->priv_data;
    int VAR_7;

    if ((VAR_7 = FUNC_2(VAR_6->file, VAR_4, VAR_5)) < 0) {
        FUNC_1(VAR_6, VAR_1, "Read error.\n");
        return FUNC_0(VAR_2);
    }
    return VAR_7 ? VAR_7 : VAR_0;
}
