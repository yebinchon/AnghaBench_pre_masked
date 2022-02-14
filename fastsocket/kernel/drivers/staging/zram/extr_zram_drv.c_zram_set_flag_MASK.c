
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct zram {TYPE_1__* table; } ;
typedef enum zram_pageflags { ____Placeholder_zram_pageflags } zram_pageflags ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct zram *VAR_0, u32 VAR_1,
   enum zram_pageflags VAR_2)
{
 VAR_0->table[VAR_1].flags |= FUNC_0(VAR_2);
}
