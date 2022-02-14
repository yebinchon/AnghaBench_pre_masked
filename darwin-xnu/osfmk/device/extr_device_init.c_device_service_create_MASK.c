
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ipc_kobject_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int ,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_13 () ;
 int VAR_11 ;
 int FUNC_14 (char*) ;

void
FUNC_15(void)
{
 VAR_10 = FUNC_5();
 if (VAR_10 == VAR_2)
     FUNC_14("can't allocate master device port");

 FUNC_4(VAR_10, (ipc_kobject_t)&VAR_9, VAR_1);
 FUNC_7(FUNC_3(), VAR_0,
    FUNC_6(VAR_10));


 VAR_5= FUNC_11();
 VAR_4 = FUNC_10("device", VAR_5);


 VAR_3 = FUNC_9();


 FUNC_12(&VAR_7, VAR_4, VAR_3);
}
