
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(void)
{
 unsigned long VAR_6;

 VAR_2--;
 VAR_4--;
 VAR_1 += 512;
 VAR_0++;
 if (!VAR_4)
  return 1;
 if (!VAR_2) {
  FUNC_2(&VAR_5, VAR_6);
  FUNC_1(0);
  FUNC_3(&VAR_5, VAR_6);
  if (!VAR_3)
   return 1;
  VAR_2 = FUNC_0(VAR_3);
  VAR_1 = VAR_3->buffer;
 }
 return 0;
}
