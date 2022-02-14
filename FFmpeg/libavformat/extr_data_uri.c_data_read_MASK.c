
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {scalar_t__ pos; scalar_t__ size; scalar_t__ data; } ;
typedef TYPE_2__ DataContext ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (unsigned char*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_1, unsigned char *VAR_2, int VAR_3)
{
    DataContext *VAR_4 = VAR_1->priv_data;

    if (VAR_4->pos >= VAR_4->size)
        return VAR_0;
    VAR_3 = FUNC_0(VAR_3, VAR_4->size - VAR_4->pos);
    FUNC_1(VAR_2, VAR_4->data + VAR_4->pos, VAR_3);
    VAR_4->pos += VAR_3;
    return VAR_3;
}
