
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef int AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,unsigned int) ;
 scalar_t__ FUNC_2 (int *,int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, AVIOContext *VAR_3, AVCodecParameters *VAR_4, unsigned VAR_5)
{
    if (VAR_5 >= 1<<24) {
        FUNC_1(VAR_2, VAR_0, "extradata size %u too large\n", VAR_5);
        return -1;
    }
    if (FUNC_2(VAR_2, VAR_4, VAR_3, VAR_5) < 0)
        return FUNC_0(VAR_1);
    return 0;
}
