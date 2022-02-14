
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwaccel_device; } ;
typedef TYPE_1__ InputStream ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,char*,scalar_t__,int ) ;
 int FUNC_2 (int *,int ,int ,int *,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_4(InputStream *VAR_4)
{
    int VAR_5;
    AVDictionary *VAR_6 = ((void*)0);

    if (VAR_3) {
        VAR_5 = FUNC_1(&VAR_6, "child_device", VAR_3, 0);
        if (VAR_5 < 0)
            return VAR_5;
    }

    VAR_5 = FUNC_2(&VAR_2, VAR_0,
                                 VAR_4->hwaccel_device, VAR_6, 0);
    if (VAR_5 < 0) {
        FUNC_3(((void*)0), VAR_1, "Error creating a QSV device\n");
        goto err_out;
    }

err_out:
    if (VAR_6)
        FUNC_0(&VAR_6);

    return VAR_5;
}
