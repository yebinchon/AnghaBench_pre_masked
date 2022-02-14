
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dirent {char* d_name; } ;
typedef int node ;
struct TYPE_7__ {TYPE_2__* context; } ;
typedef TYPE_1__ V4L2m2mPriv ;
struct TYPE_8__ {int devname; } ;
typedef TYPE_2__ V4L2m2mContext ;
typedef int DIR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int) ;
 int * FUNC_4 (char*) ;
 struct dirent* FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int ,char*,scalar_t__) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

int FUNC_12(V4L2m2mPriv *VAR_6)
{
    int VAR_7 = FUNC_0(VAR_3);
    struct dirent *VAR_8;
    char VAR_9[VAR_4];
    DIR *VAR_10;

    V4L2m2mContext *VAR_11 = VAR_6->context;

    VAR_10 = FUNC_4("/dev");
    if (!VAR_10)
        return FUNC_0(VAR_5);

    for (VAR_8 = FUNC_5(VAR_10); VAR_8; VAR_8 = FUNC_5(VAR_10)) {

        if (FUNC_8(VAR_8->d_name, "video", 5))
            continue;

        FUNC_6(VAR_9, sizeof(VAR_9), "/dev/%s", VAR_8->d_name);
        FUNC_1(VAR_6, VAR_0, "probing device %s\n", VAR_9);
        FUNC_9(VAR_11->devname, VAR_9, FUNC_7(VAR_9) + 1);
        VAR_7 = FUNC_11(VAR_11);
        if (!VAR_7)
            break;
    }

    FUNC_2(VAR_10);

    if (VAR_7) {
        FUNC_1(VAR_6, VAR_1, "Could not find a valid device\n");
        FUNC_3(VAR_11->devname, 0, sizeof(VAR_11->devname));

        return VAR_7;
    }

    FUNC_1(VAR_6, VAR_2, "Using device %s\n", VAR_9);

    return FUNC_10(VAR_11);
}
