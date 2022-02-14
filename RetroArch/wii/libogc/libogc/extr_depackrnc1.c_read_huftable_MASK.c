
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num; TYPE_1__* table; } ;
typedef TYPE_2__ huf_table ;
typedef int bit_stream ;
struct TYPE_4__ {int codelen; int value; int code; } ;


 int FUNC_0 (int *,int,int,unsigned char**) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static void FUNC_2 (huf_table *VAR_0, bit_stream *VAR_1, unsigned char **VAR_2) {
    int VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7[32];
    int VAR_8;
    unsigned long VAR_9;

    VAR_6 = FUNC_0 (VAR_1, 0x1F, 5, VAR_2);
    if (!VAR_6)
 return;

    VAR_8 = 1;
    for (VAR_3=0; VAR_3<VAR_6; VAR_3++) {
 VAR_7[VAR_3] = FUNC_0 (VAR_1, 0x0F, 4, VAR_2);
 if (VAR_8 < VAR_7[VAR_3])
     VAR_8 = VAR_7[VAR_3];
    }

    VAR_9 = 0L;
    VAR_5 = 0;
    for (VAR_3=1; VAR_3<=VAR_8; VAR_3++) {
 for (VAR_4=0; VAR_4<VAR_6; VAR_4++)
     if (VAR_7[VAR_4] == VAR_3) {
  VAR_0->table[VAR_5].code = FUNC_1 (VAR_9, VAR_3);
  VAR_0->table[VAR_5].codelen = VAR_3;
  VAR_0->table[VAR_5].value = VAR_4;
  VAR_9++;
  VAR_5++;
     }
 VAR_9 <<= 1;
    }

    VAR_0->num = VAR_5;
}
