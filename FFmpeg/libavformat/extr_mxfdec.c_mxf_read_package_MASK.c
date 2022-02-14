
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_2__ {int comment_count; int comment_refs; int name; int descriptor_ref; int package_uid; int package_ul; int tracks_count; int tracks_refs; } ;
typedef TYPE_1__ MXFPackage ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int,int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, AVIOContext *VAR_1, int VAR_2, int VAR_3, UID VAR_4, int64_t VAR_5)
{
    MXFPackage *VAR_6 = VAR_0;
    switch(VAR_2) {
    case 0x4403:
        return FUNC_1(VAR_1, &VAR_6->tracks_refs,
                                             &VAR_6->tracks_count);
    case 0x4401:

        FUNC_0(VAR_1, VAR_6->package_ul, 16);
        FUNC_0(VAR_1, VAR_6->package_uid, 16);
        break;
    case 0x4701:
        FUNC_0(VAR_1, VAR_6->descriptor_ref, 16);
        break;
    case 0x4402:
        return FUNC_2(VAR_1, VAR_3, &VAR_6->name);
    case 0x4406:
        return FUNC_1(VAR_1, &VAR_6->comment_refs,
                                             &VAR_6->comment_count);
    }
    return 0;
}
