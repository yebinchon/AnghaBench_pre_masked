
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (unsigned long,void*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int VAR_4 ;
 unsigned long FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void)
{


 FUNC_3(FUNC_9(VAR_4), VAR_2);

 FUNC_1("GSTATUS3 0x%08x\n", FUNC_2(VAR_2));
 FUNC_1("GSTATUS4 0x%08x\n", FUNC_2(VAR_3));

 if (FUNC_5()) {
  void *VAR_5 = FUNC_7(VAR_0);
  unsigned long VAR_6;
  unsigned long VAR_7 = 0;



  for (VAR_6 = 0; VAR_6 < 0x40000; VAR_6 += 0x400)
   VAR_7 += FUNC_2(VAR_5+VAR_6);

  FUNC_3(VAR_7, FUNC_7(VAR_1));
 }




 if (FUNC_6()) {
  void *VAR_8 = FUNC_7(VAR_0);
  unsigned long VAR_9;
  unsigned long VAR_10 = 0;



  for (VAR_9 = 0; VAR_9 < 0x40000; VAR_9 += 0x4)
   VAR_10 += FUNC_2(VAR_8+VAR_9);

  FUNC_3(VAR_10, FUNC_7(VAR_1));
 }

 if ( FUNC_4() )
  FUNC_8(FUNC_0(2), 1);

}
