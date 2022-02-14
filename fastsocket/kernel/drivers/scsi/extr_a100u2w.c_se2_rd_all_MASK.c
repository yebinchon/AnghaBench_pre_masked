
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct orc_host {int dummy; } ;
struct TYPE_2__ {scalar_t__ CheckSum; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (struct orc_host*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct orc_host * VAR_1)
{
 int VAR_2;
 u8 *VAR_3, VAR_4 = 0;

 VAR_3 = (u8 *) VAR_0;
 for (VAR_2 = 0; VAR_2 < 64; VAR_2++, VAR_3++) {
  if (FUNC_0(VAR_1, (u8) VAR_2, VAR_3) == 0)
   return -1;
 }


 VAR_3 = (u8 *) VAR_0;
 for (VAR_2 = 0; VAR_2 < 63; VAR_2++)
  VAR_4 += *VAR_3++;

 if (VAR_0->CheckSum != (u8) VAR_4)
  return -1;
 return 1;
}
