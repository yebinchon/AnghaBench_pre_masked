
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {size_t data_size; scalar_t__ data; TYPE_3__* data_ref; } ;
typedef TYPE_1__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int const*,size_t) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(CodedBitstreamContext *VAR_2,
                                  CodedBitstreamFragment *VAR_3,
                                  const uint8_t *VAR_4, size_t VAR_5)
{
    FUNC_1(!VAR_3->data && !VAR_3->data_ref);

    VAR_3->data_ref =
        FUNC_2(VAR_5 + VAR_0);
    if (!VAR_3->data_ref)
        return FUNC_0(VAR_1);

    VAR_3->data = VAR_3->data_ref->data;
    VAR_3->data_size = VAR_5;

    FUNC_3(VAR_3->data, VAR_4, VAR_5);
    FUNC_4(VAR_3->data + VAR_5, 0,
           VAR_0);

    return 0;
}
