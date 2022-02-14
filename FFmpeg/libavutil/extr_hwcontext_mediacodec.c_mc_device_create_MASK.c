
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVHWDeviceContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_1(AVHWDeviceContext *VAR_2, const char *VAR_3,
                            AVDictionary *VAR_4, int VAR_5)
{
    if (VAR_3 && VAR_3[0]) {
        FUNC_0(VAR_2, VAR_1, "Device selection unsupported.\n");
        return VAR_0;
    }

    return 0;
}
