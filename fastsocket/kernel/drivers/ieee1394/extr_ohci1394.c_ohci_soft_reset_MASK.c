
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ti_ohci*,int ) ;
 int FUNC_3 (struct ti_ohci*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ti_ohci *VAR_3) {
 int VAR_4;

 FUNC_3(VAR_3, VAR_0, VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!(FUNC_2(VAR_3, VAR_0) & VAR_1))
   break;
  FUNC_1(1);
 }
 FUNC_0 ("Soft reset finished");
}
