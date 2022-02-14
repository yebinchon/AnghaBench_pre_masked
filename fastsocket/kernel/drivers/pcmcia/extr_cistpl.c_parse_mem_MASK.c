
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_5__ {int nwin; TYPE_1__* win; } ;
typedef TYPE_2__ cistpl_mem_t ;
struct TYPE_4__ {int len; int card_addr; int host_addr; } ;



__attribute__((used)) static u_char *FUNC_0(u_char *VAR_0, u_char *VAR_1, cistpl_mem_t *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
    u_int VAR_8, VAR_9, VAR_10;

    if (VAR_0 == VAR_1) return ((void*)0);

    VAR_2->nwin = (*VAR_0 & 0x07) + 1;
    VAR_6 = (*VAR_0 & 0x18) >> 3;
    VAR_5 = (*VAR_0 & 0x60) >> 5;
    VAR_7 = (*VAR_0 & 0x80);
    if (++VAR_0 == VAR_1) return ((void*)0);

    for (VAR_3 = 0; VAR_3 < VAR_2->nwin; VAR_3++) {
 VAR_8 = VAR_9 = VAR_10 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++, VAR_0++) {
     if (VAR_0 == VAR_1) return ((void*)0);
     VAR_8 += *VAR_0 << (VAR_4*8);
 }
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_0++) {
     if (VAR_0 == VAR_1) return ((void*)0);
     VAR_9 += *VAR_0 << (VAR_4*8);
 }
 if (VAR_7)
     for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_0++) {
  if (VAR_0 == VAR_1) return ((void*)0);
  VAR_10 += *VAR_0 << (VAR_4*8);
     }
 VAR_2->win[VAR_3].len = VAR_8 << 8;
 VAR_2->win[VAR_3].card_addr = VAR_9 << 8;
 VAR_2->win[VAR_3].host_addr = VAR_10 << 8;
    }
    return VAR_0;
}
