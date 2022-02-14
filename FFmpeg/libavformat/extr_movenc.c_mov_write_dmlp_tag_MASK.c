
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int vos_len; scalar_t__ vos_data; } ;
typedef TYPE_1__ MOVTrack ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_3, AVIOContext *VAR_4, MOVTrack *VAR_5)
{
    int64_t VAR_6 = FUNC_4(VAR_4);
    int VAR_7;
    FUNC_6(VAR_4, 0);
    FUNC_7(VAR_4, "dmlp");

    if (VAR_5->vos_len < 20) {
        FUNC_3(VAR_3, VAR_1,
               "Cannot write moov atom before TrueHD packets."
               " Set the delay_moov flag to fix this.\n");
        return FUNC_0(VAR_2);
    }

    VAR_7 = (FUNC_1(VAR_5->vos_data) & 0xFFF) * 2;
    if (VAR_7 < 20 || VAR_7 > VAR_5->vos_len)
        return VAR_0;


    if (FUNC_2(VAR_5->vos_data + 4) != 0xF8726FBA)
        return VAR_0;

    FUNC_6(VAR_4, FUNC_2(VAR_5->vos_data + 8));
    FUNC_5(VAR_4, FUNC_1(VAR_5->vos_data + 18) << 1);
    FUNC_6(VAR_4, 0);

    return FUNC_8(VAR_4, VAR_6);
}
