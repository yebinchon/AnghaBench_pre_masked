
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zero_buf ;
typedef int UBYTE ;
struct TYPE_4__ {int current_sector; } ;
typedef TYPE_1__ ATR_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(ATR_Info *VAR_2, int VAR_3)
{
 UBYTE VAR_4[256];
 FUNC_0(VAR_4, 0, sizeof(VAR_4));
 while (VAR_2->current_sector < VAR_3)
  if (!FUNC_1(VAR_2, VAR_4))
   return VAR_0;
 return VAR_1;
}
