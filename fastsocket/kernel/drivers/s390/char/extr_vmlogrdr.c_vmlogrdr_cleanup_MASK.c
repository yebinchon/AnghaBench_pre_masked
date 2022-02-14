
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffer; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int ,int) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
        int VAR_4;

 if (VAR_2) {
  FUNC_1(VAR_2);
  VAR_2=((void*)0);
 }
 for (VAR_4=0; VAR_4 < VAR_0; ++VAR_4 ) {
  FUNC_4(&VAR_1[VAR_4]);
  FUNC_2((unsigned long)VAR_1[VAR_4].buffer);
 }
 FUNC_5();
 if (VAR_3) {
  FUNC_3(FUNC_0(VAR_3, 0), VAR_0);
  VAR_3=0;
 }
}
