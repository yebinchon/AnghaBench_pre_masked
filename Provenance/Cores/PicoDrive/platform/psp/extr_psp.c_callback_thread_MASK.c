
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SceSize ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(SceSize VAR_2, void *VAR_3)
{
 int VAR_4;

 FUNC_0("callback_thread started with id %08x, priority %i\n",
  FUNC_3(), FUNC_2());

 VAR_4 = FUNC_1("Exit Callback", VAR_0, ((void*)0));
 FUNC_4(VAR_4);
 VAR_4 = FUNC_1("Power Callback", VAR_1, ((void*)0));
 FUNC_6(0, VAR_4);

 FUNC_5();

 return 0;
}
