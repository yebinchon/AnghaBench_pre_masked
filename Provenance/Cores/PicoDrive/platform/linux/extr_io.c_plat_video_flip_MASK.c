
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int VAR_7 ;
 int FUNC_4 () ;

void FUNC_5(void)
{
 unsigned int *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_6 == ((void*)0))
  return;

 VAR_9 = VAR_4 * VAR_2;
 VAR_8 = (void *)VAR_6->data;

 if (VAR_0 == 8)
 {
  unsigned char *VAR_11 = VAR_3;
  int VAR_12;

  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  {
   VAR_12 = VAR_1[VAR_11[VAR_10]];
   VAR_8[VAR_10] = VAR_12;
  }
 }
 else
 {
  unsigned short *VAR_13 = VAR_3;

  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  {


   VAR_8[VAR_10] = (VAR_13[VAR_10] << 8) & 0xf80000;
   VAR_8[VAR_10] |= (VAR_13[VAR_10] << 5) & 0x00fc00;
   VAR_8[VAR_10] |= (VAR_13[VAR_10] << 3) & 0x0000f8;
  }
 }
 FUNC_4();

 if (VAR_5) {
  FUNC_2();
  FUNC_3(VAR_7, FUNC_0(VAR_7, 0));


  FUNC_1(0, 0);
 }
}
