
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_3__ {int sectorsize; int fp; int current_sector; } ;
typedef TYPE_1__ ATR_Info ;


 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(ATR_Info *VAR_0, UBYTE *VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->current_sector++ <= 3 ? 128 : VAR_0->sectorsize, VAR_0->fp);
}
