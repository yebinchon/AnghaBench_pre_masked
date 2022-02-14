
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ UID ;
struct TYPE_6__ {int * fc; } ;
typedef TYPE_2__ MXFContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*,int ,char*) ;
 int FUNC_2 (int *,char*,TYPE_1__,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, AVIOContext *VAR_1, int VAR_2, int VAR_3, UID VAR_4, int64_t VAR_5)
{
    MXFContext *VAR_6 = VAR_0;
    AVFormatContext *VAR_7 = VAR_6->fc;
    int VAR_8;
    UID VAR_9 = { 0 };
    char *VAR_10 = ((void*)0);
    uint64_t VAR_11;
    switch (VAR_2) {
    case 0x3C01:
        FUNC_0(VAR_1, "company_name", VAR_10);
        break;
    case 0x3C02:
        FUNC_0(VAR_1, "product_name", VAR_10);
        break;
    case 0x3C04:
        FUNC_0(VAR_1, "product_version", VAR_10);
        break;
    case 0x3C05:
        FUNC_2(VAR_1, "product_uid", VAR_9, VAR_10);
        break;
    case 0x3C06:
        FUNC_1(VAR_1, "modification_date", VAR_11, VAR_10);
        break;
    case 0x3C08:
        FUNC_0(VAR_1, "application_platform", VAR_10);
        break;
    case 0x3C09:
        FUNC_2(VAR_1, "generation_uid", VAR_9, VAR_10);
        break;
    case 0x3C0A:
        FUNC_2(VAR_1, "uid", VAR_9, VAR_10);
        break;
    }
    return 0;
}
