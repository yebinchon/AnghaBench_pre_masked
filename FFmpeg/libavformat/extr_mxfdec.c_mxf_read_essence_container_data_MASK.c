
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_2__ {void* body_sid; void* index_sid; int package_uid; int package_ul; } ;
typedef TYPE_1__ MXFEssenceContainerData ;
typedef int AVIOContext ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, AVIOContext *VAR_1, int VAR_2, int VAR_3, UID VAR_4, int64_t VAR_5)
{
    MXFEssenceContainerData *VAR_6 = VAR_0;
    switch(VAR_2) {
        case 0x2701:

            FUNC_1(VAR_1, VAR_6->package_ul, 16);
            FUNC_1(VAR_1, VAR_6->package_uid, 16);
            break;
        case 0x3f06:
            VAR_6->index_sid = FUNC_0(VAR_1);
            break;
        case 0x3f07:
            VAR_6->body_sid = FUNC_0(VAR_1);
            break;
    }
    return 0;
}
