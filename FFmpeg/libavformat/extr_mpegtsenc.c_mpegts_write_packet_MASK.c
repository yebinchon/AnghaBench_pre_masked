
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    if (!VAR_1) {
        FUNC_0(VAR_0);
        return 1;
    } else {
        return FUNC_1(VAR_0, VAR_1);
    }
}
