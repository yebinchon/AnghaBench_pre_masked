
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
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int ,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
    LIBSSHContext *VAR_5 = VAR_2->priv_data;
    int VAR_6;

    if ((VAR_6 = FUNC_2(VAR_5->file, VAR_3, VAR_4)) < 0) {
        FUNC_1(VAR_5, VAR_0, "Write error.\n");
        return FUNC_0(VAR_1);
    }
    return VAR_6;
}
