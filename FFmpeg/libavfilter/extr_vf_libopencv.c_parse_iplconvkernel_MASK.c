
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IplConvKernel ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int**) ;
 int FUNC_2 (void*,int ,char*,...) ;
 int * FUNC_3 (int,int,int,int,int,int*) ;
 int FUNC_4 (int*,int*,int**,char*,void*) ;
 int FUNC_5 (char*,char*,int*,int*,int*,int*,char*,char*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(IplConvKernel **VAR_8, char *VAR_9, void *VAR_10)
{
    char VAR_11[128] = "", VAR_12[32] = "rect";
    int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = VAR_5;
    int *VAR_18 = ((void*)0), VAR_19 = 0;

    FUNC_5(VAR_9, "%dx%d+%dx%d/%32[^=]=%127s", &VAR_13, &VAR_14, &VAR_15, &VAR_16, VAR_12, VAR_11);

    if (!FUNC_6(VAR_12, "rect" )) VAR_17 = VAR_5;
    else if (!FUNC_6(VAR_12, "cross" )) VAR_17 = VAR_2;
    else if (!FUNC_6(VAR_12, "ellipse")) VAR_17 = VAR_4;
    else if (!FUNC_6(VAR_12, "custom" )) {
        VAR_17 = VAR_3;
        if ((VAR_19 = FUNC_4(&VAR_13, &VAR_14, &VAR_18, VAR_11, VAR_10)) < 0)
            return VAR_19;
    } else {
        FUNC_2(VAR_10, VAR_0,
               "Shape unspecified or type '%s' unknown.\n", VAR_12);
        VAR_19 = FUNC_0(VAR_6);
        goto out;
    }

    if (VAR_14 <= 0 || VAR_13 <= 0) {
        FUNC_2(VAR_10, VAR_0,
               "Invalid non-positive values for shape size %dx%d\n", VAR_13, VAR_14);
        VAR_19 = FUNC_0(VAR_6);
        goto out;
    }

    if (VAR_15 < 0 || VAR_16 < 0 || VAR_15 >= VAR_13 || VAR_16 >= VAR_14) {
        FUNC_2(VAR_10, VAR_0,
               "Shape anchor %dx%d is not inside the rectangle with size %dx%d.\n",
               VAR_15, VAR_16, VAR_13, VAR_14);
        VAR_19 = FUNC_0(VAR_6);
        goto out;
    }

    *VAR_8 = FUNC_3(VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
    if (!*VAR_8) {
        VAR_19 = FUNC_0(VAR_7);
        goto out;
    }

    FUNC_2(VAR_10, VAR_1, "Structuring element: w:%d h:%d x:%d y:%d shape:%s\n",
           VAR_14, VAR_13, VAR_15, VAR_16, VAR_12);
out:
    FUNC_1(&VAR_18);
    return VAR_19;
}
