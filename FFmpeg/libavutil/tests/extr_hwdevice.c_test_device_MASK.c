
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {int type; } ;
typedef TYPE_1__ AVHWDeviceContext ;
typedef int AVDictionary ;
typedef TYPE_2__ AVBufferRef ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__**,int,char const*,int *,int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,char const*) ;

__attribute__((used)) static int FUNC_4(enum AVHWDeviceType VAR_1, const char *VAR_2,
                       const char *VAR_3, AVDictionary *VAR_4, int VAR_5)
{
    AVBufferRef *VAR_6;
    AVHWDeviceContext *VAR_7;
    int VAR_8;

    VAR_8 = FUNC_1(&VAR_6, VAR_1, VAR_3, VAR_4, VAR_5);
    if (VAR_8 < 0) {
        FUNC_2(VAR_0, "Failed to create %s device: %d.\n", VAR_2, VAR_8);
        return 1;
    }

    VAR_7 = (AVHWDeviceContext*)VAR_6->data;
    if (VAR_7->type != VAR_1) {
        FUNC_2(VAR_0, "Device created as type %d has type %d.\n",
                VAR_1, VAR_7->type);
        FUNC_0(&VAR_6);
        return -1;
    }

    FUNC_2(VAR_0, "Device type %s successfully created.\n", VAR_2);

    VAR_8 = FUNC_3(VAR_6, VAR_2);

    FUNC_0(&VAR_6);

    return VAR_8;
}
