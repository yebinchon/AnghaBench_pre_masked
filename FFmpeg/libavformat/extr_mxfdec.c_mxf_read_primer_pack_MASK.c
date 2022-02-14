
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_2__ {int local_tags_count; scalar_t__ local_tags; int fc; } ;
typedef TYPE_1__ MXFContext ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (int *,char*,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_5, AVIOContext *VAR_6, int VAR_7, int VAR_8, UID VAR_9, int64_t VAR_10)
{
    MXFContext *VAR_11 = VAR_5;
    int VAR_12 = FUNC_4(VAR_6);
    int VAR_13 = FUNC_4(VAR_6);

    if (VAR_13 != 18) {
        FUNC_6(VAR_6, "Primer pack item length %d", VAR_13);
        return VAR_1;
    }
    if (VAR_12 > 65536 || VAR_12 < 0) {
        FUNC_3(VAR_11->fc, VAR_2, "item_num %d is too large\n", VAR_12);
        return VAR_0;
    }
    if (VAR_11->local_tags)
        FUNC_3(VAR_11->fc, VAR_3, "Multiple primer packs\n");
    FUNC_2(VAR_11->local_tags);
    VAR_11->local_tags_count = 0;
    VAR_11->local_tags = FUNC_1(VAR_12, VAR_13);
    if (!VAR_11->local_tags)
        return FUNC_0(VAR_4);
    VAR_11->local_tags_count = VAR_12;
    FUNC_5(VAR_6, VAR_11->local_tags, VAR_12*VAR_13);
    return 0;
}
