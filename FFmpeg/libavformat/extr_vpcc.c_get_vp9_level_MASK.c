
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {int den; int num; } ;
typedef TYPE_1__ AVRational ;
typedef TYPE_2__ AVCodecParameters ;



__attribute__((used)) static int FUNC_0(AVCodecParameters *VAR_0, AVRational *VAR_1) {
    int VAR_2 = VAR_0->width * VAR_0->height;
    int64_t VAR_3;


    if (!VAR_1 || !VAR_1->den)
        VAR_3 = 0;
    else
        VAR_3 = ((int64_t)VAR_2 * VAR_1->num) / VAR_1->den;

    if (VAR_2 <= 0) {
        return 0;
    } else if (VAR_3 <= 829440 && VAR_2 <= 36864) {
        return 10;
    } else if (VAR_3 <= 2764800 && VAR_2 <= 73728) {
        return 11;
    } else if (VAR_3 <= 4608000 && VAR_2 <= 122880) {
        return 20;
    } else if (VAR_3 <= 9216000 && VAR_2 <= 245760) {
        return 21;
    } else if (VAR_3 <= 20736000 && VAR_2 <= 552960) {
        return 30;
    } else if (VAR_3 <= 36864000 && VAR_2 <= 983040) {
        return 31;
    } else if (VAR_3 <= 83558400 && VAR_2 <= 2228224) {
        return 40;
    } else if (VAR_3 <= 160432128 && VAR_2 <= 2228224) {
        return 41;
    } else if (VAR_3 <= 311951360 && VAR_2 <= 8912896) {
        return 50;
    } else if (VAR_3 <= 588251136 && VAR_2 <= 8912896) {
        return 51;
    } else if (VAR_3 <= 1176502272 && VAR_2 <= 8912896) {
        return 52;
    } else if (VAR_3 <= 1176502272 && VAR_2 <= 35651584) {
        return 60;
    } else if (VAR_3 <= 2353004544 && VAR_2 <= 35651584) {
        return 61;
    } else if (VAR_3 <= 4706009088 && VAR_2 <= 35651584) {
        return 62;
    } else {
        return 0;
    }
}
