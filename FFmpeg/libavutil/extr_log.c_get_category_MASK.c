
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; scalar_t__ category; int (* get_category ) (void*) ;} ;
typedef TYPE_1__ AVClass ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(void *VAR_2){
    AVClass *VAR_3 = *(AVClass **) VAR_2;
    if( !VAR_3
        || (VAR_3->version&0xFF)<100
        || VAR_3->version < (51 << 16 | 59 << 8)
        || VAR_3->category >= VAR_1) return VAR_0 + 16;

    if(VAR_3->get_category)
        return VAR_3->get_category(VAR_2) + 16;

    return VAR_3->category + 16;
}
