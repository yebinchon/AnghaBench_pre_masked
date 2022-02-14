
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pointer ;
struct TYPE_2__ {int (* SetFetch ) (int,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int,int,int ) ;

__attribute__((used)) static int FUNC_4(void) {
 int VAR_3;



 if ((VAR_2 = FUNC_1(0x10000)) != ((void*)0))
  FUNC_2(VAR_2, 0xFF, 0x10000);

 FUNC_0(&VAR_0, ((void*)0));

 for (VAR_3 = 0x10; VAR_3 < 0x100; VAR_3++)
  VAR_1->SetFetch(VAR_3 << 16, (VAR_3 << 16) + 0xFFFF, (pointer)VAR_2);

 return 0;
}
