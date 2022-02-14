
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {int pb; int level; int s; } ;
typedef TYPE_1__ MP4DescrParseContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;





 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int ,int *,int*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_8 (int *,scalar_t__*,int*) ;

__attribute__((used)) static int FUNC_9(MP4DescrParseContext *VAR_4, int64_t VAR_5, int VAR_6,
                           int VAR_7)
{
    int VAR_8;
    int VAR_9 = FUNC_2(VAR_4->s, &VAR_4->pb, &VAR_8);
    int VAR_10 = 0;

    FUNC_8(&VAR_4->pb, &VAR_5, &VAR_6);
    if (VAR_6 < 0 || VAR_9 > VAR_6 || VAR_9 <= 0) {
        FUNC_0(VAR_4->s, VAR_1,
               "Tag %x length violation new length %d bytes remaining %d\n",
               VAR_8, VAR_9, VAR_6);
        return VAR_0;
    }

    if (VAR_4->level++ >= VAR_2) {
        FUNC_0(VAR_4->s, VAR_1, "Maximum MP4 descriptor level exceeded\n");
        VAR_10 = VAR_0;
        goto done;
    }

    if (VAR_7 && VAR_8 != VAR_7) {
        FUNC_0(VAR_4->s, VAR_1, "Found tag %x expected %x\n", VAR_8,
               VAR_7);
        VAR_10 = VAR_0;
        goto done;
    }

    switch (VAR_8) {
    case 130:
        VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_9);
        break;
    case 129:
        VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_9);
        break;
    case 131:
        VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_9);
        break;
    case 132:
        VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_9);
        break;
    case 128:
        VAR_10 = FUNC_7(VAR_4, VAR_5, VAR_9);
        break;
    }


done:
    VAR_4->level--;
    FUNC_1(&VAR_4->pb, VAR_5 + VAR_9, VAR_3);
    return VAR_10;
}
