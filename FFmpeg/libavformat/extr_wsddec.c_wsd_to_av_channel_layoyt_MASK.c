
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_10, int VAR_11)
{
    switch (VAR_11) {
    case 2: return VAR_2;
    case 3:
        FUNC_1(VAR_10, "Rr-middle");
        break;
    case 4: return VAR_0;
    case 5:
        FUNC_1(VAR_10, "Lr-middle");
        break;
    case 6: return VAR_1;
    case 24: return VAR_8;
    case 26: return VAR_6;
    case 27: return VAR_7;
    case 28: return VAR_3;
    case 29: return VAR_5;
    case 30: return VAR_4;
    default:
        FUNC_0(VAR_10, VAR_9, "reserved channel assignment\n");
        break;
    }
    return 0;
}
