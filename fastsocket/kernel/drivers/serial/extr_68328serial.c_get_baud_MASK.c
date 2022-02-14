
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m68k_serial {size_t line; } ;
struct TYPE_2__ {unsigned short ubaud; } ;


 unsigned long FUNC_0 (unsigned short,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline int FUNC_1(struct m68k_serial *VAR_3)
{
 unsigned long VAR_4 = 115200;
 unsigned short int VAR_5 = VAR_2[VAR_3->line].ubaud;
 if (FUNC_0(VAR_5, VAR_1) == 0x38) VAR_4 = 38400;
 VAR_4 >>= FUNC_0(VAR_5, VAR_0);

 return VAR_4;
}
