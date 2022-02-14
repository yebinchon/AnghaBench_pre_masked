
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int MOVTrack ;
typedef int MOVMuxContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_0, AVIOContext *VAR_1,
                              MOVMuxContext *VAR_2, MOVTrack *VAR_3)
{
    int64_t VAR_4 = FUNC_0(VAR_1);
    int VAR_5;

    FUNC_1(VAR_1, 0);
    FUNC_2(VAR_1, "mdia");
    FUNC_4(VAR_1, VAR_2, VAR_3);
    FUNC_3(VAR_0, VAR_1, VAR_3);
    if ((VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3)) < 0)
        return VAR_5;
    return FUNC_6(VAR_1, VAR_4);
}
