
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int filesize; int file; } ;
typedef TYPE_2__ LIBSSHContext ;


 scalar_t__ FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int64_t FUNC_4(URLContext *VAR_3, int64_t VAR_4, int VAR_5)
{
    LIBSSHContext *VAR_6 = VAR_3->priv_data;
    int64_t VAR_7;

    if (VAR_6->filesize == -1 && (VAR_5 == 131 || VAR_5 == 129)) {
        FUNC_1(VAR_3, VAR_0, "Error during seeking.\n");
        return FUNC_0(VAR_2);
    }

    switch(VAR_5) {
    case 131:
        return VAR_6->filesize;
    case 128:
        VAR_7 = VAR_4;
        break;
    case 130:
        VAR_7 = FUNC_3(VAR_6->file) + VAR_4;
        break;
    case 129:
        VAR_7 = VAR_6->filesize + VAR_4;
        break;
    default:
        return FUNC_0(VAR_1);
    }

    if (VAR_7 < 0) {
        FUNC_1(VAR_3, VAR_0, "Seeking to nagative position.\n");
        return FUNC_0(VAR_1);
    }

    if (FUNC_2(VAR_6->file, VAR_7)) {
        FUNC_1(VAR_3, VAR_0, "Error during seeking.\n");
        return FUNC_0(VAR_2);
    }

    return VAR_7;
}
