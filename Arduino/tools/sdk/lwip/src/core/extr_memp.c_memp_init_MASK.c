
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef size_t u16_t ;
struct memp {struct memp* next; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,size_t,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 size_t* VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int* VAR_9 ;
 struct memp** VAR_10 ;
 int VAR_11 ;

void
FUNC_4(void)
{
  struct memp *VAR_12;
  u16_t VAR_13, VAR_14;

  for (VAR_13 = 0; VAR_13 < VAR_0; ++VAR_13) {
    FUNC_1(VAR_11, VAR_13, 0);
    FUNC_1(VAR_5, VAR_13, 0);
    FUNC_1(VAR_4, VAR_13, 0);
    FUNC_1(VAR_3, VAR_13, VAR_8[VAR_13]);
  }


  VAR_12 = (struct memp *)FUNC_0(VAR_7);


  for (VAR_13 = 0; VAR_13 < VAR_0; ++VAR_13) {
    VAR_10[VAR_13] = ((void*)0);




    for (VAR_14 = 0; VAR_14 < VAR_8[VAR_13]; ++VAR_14) {
      VAR_12->next = (struct memp *)VAR_10[VAR_13];
      VAR_10[VAR_13] = VAR_12;
      VAR_12 = (struct memp *)(void *)((u8_t *)VAR_12 + VAR_2 + VAR_9[VAR_13]



      );
    }
  }





}
