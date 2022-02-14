
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int metadata; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {int isom; TYPE_5__* fc; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (TYPE_5__*,int ,char*,char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static int FUNC_9(MOVContext *VAR_3, AVIOContext *VAR_4, MOVAtom VAR_5)
{
    uint32_t VAR_6;
    int VAR_7;
    char* VAR_8;
    uint8_t VAR_9[5] = {0};
    int VAR_10 = FUNC_7(VAR_4, VAR_9, 4);
    if (VAR_10 < 0)
        return VAR_10;

    if (FUNC_8(VAR_9, "qt  "))
        VAR_3->isom = 1;
    FUNC_4(VAR_3->fc, VAR_1, "ISO: File Type Major Brand: %.4s\n",(char *)&VAR_9);
    FUNC_1(&VAR_3->fc->metadata, "major_brand", VAR_9, 0);
    VAR_6 = FUNC_6(VAR_4);
    FUNC_2(&VAR_3->fc->metadata, "minor_version", VAR_6, 0);

    VAR_7 = VAR_5.size - 8;
    if (VAR_7 < 0)
        return VAR_0;
    VAR_8 = FUNC_5(VAR_7 + 1);
    if (!VAR_8)
        return FUNC_0(VAR_2);

    VAR_10 = FUNC_7(VAR_4, VAR_8, VAR_7);
    if (VAR_10 < 0) {
        FUNC_3(&VAR_8);
        return VAR_10;
    }
    VAR_8[VAR_7] = 0;
    FUNC_1(&VAR_3->fc->metadata, "compatible_brands", VAR_8, 0);
    FUNC_3(&VAR_8);

    return 0;
}
