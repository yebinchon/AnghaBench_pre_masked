
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* avf; int current_segment_final_filename_fmt; } ;
typedef TYPE_2__ VariantStream ;
struct TYPE_9__ {int flags; } ;
struct TYPE_7__ {int url; } ;
typedef TYPE_3__ HLSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(HLSContext *VAR_2, VariantStream *VAR_3, char *VAR_4) {
    if ((VAR_2->flags & (VAR_1 | VAR_0)) &&
        FUNC_1(VAR_3->current_segment_final_filename_fmt)) {
        FUNC_0(VAR_4, VAR_3->avf->url, VAR_2);
    }
}
