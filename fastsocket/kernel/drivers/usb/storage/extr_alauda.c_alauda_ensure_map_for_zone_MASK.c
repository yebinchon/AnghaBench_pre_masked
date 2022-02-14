
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {int dummy; } ;
struct TYPE_2__ {int ** pba_to_lba; int ** lba_to_pba; } ;


 TYPE_1__ FUNC_0 (struct us_data*) ;
 int FUNC_1 (struct us_data*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct us_data *VAR_0, unsigned int VAR_1)
{
 if (FUNC_0(VAR_0).lba_to_pba[VAR_1] == ((void*)0)
  || FUNC_0(VAR_0).pba_to_lba[VAR_1] == ((void*)0))
  FUNC_1(VAR_0, VAR_1);
}
