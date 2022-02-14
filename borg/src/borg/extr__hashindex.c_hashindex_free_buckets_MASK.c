
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ buf; } ;
struct TYPE_4__ {int buckets; TYPE_3__ buckets_buffer; } ;
typedef TYPE_1__ HashIndex ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(HashIndex *VAR_0)
{

    if(VAR_0->buckets_buffer.buf) {
        FUNC_0(&VAR_0->buckets_buffer);
    } else

    {
        FUNC_1(VAR_0->buckets);
    }
}
