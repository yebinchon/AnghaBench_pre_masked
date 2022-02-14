
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_9__ {int extradata_size; } ;
struct TYPE_8__ {int size; int type; } ;
struct TYPE_7__ {int fc; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef int AVIOContext ;
typedef TYPE_3__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static int64_t FUNC_5(MOVContext *VAR_2, AVIOContext *VAR_3, MOVAtom VAR_4,
                                        AVCodecParameters *VAR_5, uint8_t *VAR_6)
{
    int64_t VAR_7 = VAR_4.size;
    int VAR_8;

    FUNC_0(VAR_6 , VAR_4.size + 8);
    FUNC_1(VAR_6 + 4, VAR_4.type);
    VAR_8 = FUNC_3(VAR_3, VAR_6 + 8, VAR_4.size);
    if (VAR_8 < 0) {
        VAR_5->extradata_size -= VAR_4.size;
        return VAR_8;
    } else if (VAR_8 < VAR_4.size) {
        FUNC_2(VAR_2->fc, VAR_1, "truncated extradata\n");
        VAR_5->extradata_size -= VAR_4.size - VAR_8;
        VAR_7 = VAR_8;
    }
    FUNC_4(VAR_6 + 8 + VAR_8, 0, VAR_0);
    return VAR_7;
}
