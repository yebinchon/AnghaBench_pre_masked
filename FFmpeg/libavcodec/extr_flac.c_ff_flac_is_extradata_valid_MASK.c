
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum FLACExtradataFormat { ____Placeholder_FLACExtradataFormat } FLACExtradataFormat ;
struct TYPE_4__ {scalar_t__ extradata_size; int * extradata; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (float,char,char,char) ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;

int FUNC_3(AVCodecContext *VAR_5,
                               enum FLACExtradataFormat *VAR_6,
                               uint8_t **VAR_7)
{
    if (!VAR_5->extradata || VAR_5->extradata_size < VAR_4) {
        FUNC_2(VAR_5, VAR_0, "extradata NULL or too small.\n");
        return 0;
    }
    if (FUNC_0(VAR_5->extradata) != FUNC_1('f','L','a','C')) {

        if (VAR_5->extradata_size != VAR_4) {
            FUNC_2(VAR_5, VAR_1, "extradata contains %d bytes too many.\n",
                   VAR_4-VAR_5->extradata_size);
        }
        *VAR_6 = VAR_3;
        *VAR_7 = VAR_5->extradata;
    } else {
        if (VAR_5->extradata_size < 8+VAR_4) {
            FUNC_2(VAR_5, VAR_0, "extradata too small.\n");
            return 0;
        }
        *VAR_6 = VAR_2;
        *VAR_7 = &VAR_5->extradata[8];
    }
    return 1;
}
