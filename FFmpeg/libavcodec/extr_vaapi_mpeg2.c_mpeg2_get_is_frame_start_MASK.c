
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ picture_structure; scalar_t__ first_field; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const MpegEncContext *VAR_1)
{
    return VAR_1->first_field || VAR_1->picture_structure == VAR_0;
}
