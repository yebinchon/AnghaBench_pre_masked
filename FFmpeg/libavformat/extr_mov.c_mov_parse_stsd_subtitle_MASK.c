
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int size; } ;
struct TYPE_9__ {int height; int width; } ;
struct TYPE_8__ {scalar_t__ codec_tag; int height; int width; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef int MOVContext ;
typedef TYPE_3__ MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,TYPE_3__) ;

__attribute__((used)) static void FUNC_2(MOVContext *VAR_0, AVIOContext *VAR_1,
                                    AVStream *VAR_2, MOVStreamContext *VAR_3,
                                    int64_t VAR_4)
{


    MOVAtom VAR_5 = { .size = VAR_4 };

    if (VAR_2->codecpar->codec_tag != FUNC_0("mp4s"))
        FUNC_1(VAR_0, VAR_1, VAR_5);
    VAR_2->codecpar->width = VAR_3->width;
    VAR_2->codecpar->height = VAR_3->height;
}
