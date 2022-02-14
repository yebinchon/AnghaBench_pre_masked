
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num; TYPE_1__* table; } ;
typedef TYPE_2__ huf_table ;
typedef int bit_stream ;
struct TYPE_4__ {int codelen; scalar_t__ code; unsigned long value; } ;


 int FUNC_0 (int *,int,unsigned char**) ;
 scalar_t__ FUNC_1 (int *,unsigned long) ;
 unsigned long FUNC_2 (int *,unsigned long,int,unsigned char**) ;

__attribute__((used)) static unsigned long FUNC_3 (huf_table *VAR_0, bit_stream *VAR_1,
          unsigned char **VAR_2) {
    int VAR_3;
    unsigned long VAR_4;

    for (VAR_3=0; VAR_3<VAR_0->num; VAR_3++) {
 unsigned long VAR_5 = (1 << VAR_0->table[VAR_3].codelen) - 1;
 if (FUNC_1(VAR_1, VAR_5) == VAR_0->table[VAR_3].code)
     break;
    }
    if (VAR_3 == VAR_0->num)
 return -1;
    FUNC_0 (VAR_1, VAR_0->table[VAR_3].codelen, VAR_2);

    VAR_4 = VAR_0->table[VAR_3].value;

    if (VAR_4 >= 2) {
 VAR_4 = 1 << (VAR_4-1);
 VAR_4 |= FUNC_2 (VAR_1, VAR_4-1, VAR_0->table[VAR_3].value - 1, VAR_2);
    }
    return VAR_4;
}
