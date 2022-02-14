
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(AVFormatContext *VAR_1, AVIOContext *VAR_2, int *VAR_3)
{
    int VAR_4;
    *VAR_3 = FUNC_1(VAR_2);
    VAR_4 = FUNC_2(VAR_2);
    FUNC_0(VAR_1, VAR_0, "MPEG-4 description: tag=0x%02x len=%d\n", *VAR_3, VAR_4);
    return VAR_4;
}
