
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int,int ,int ,int ,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(int VAR_8)
{
 int VAR_9;


 VAR_9 = FUNC_4();
 if (VAR_9 != 0) {
  FUNC_9("Unable to initialize the hypervisor - 0x%x\n", VAR_9);
  return VAR_9;
 }

 FUNC_12(&VAR_4, VAR_7, 0);

 VAR_9 = FUNC_0(&VAR_2);
 if (VAR_9)
  goto err_cleanup;

 VAR_9 = FUNC_10(VAR_8, VAR_6, 0, VAR_0, VAR_1);

 if (VAR_9 != 0) {
  FUNC_9("Unable to request IRQ %d\n",
      VAR_8);
  goto err_unregister;
 }






 FUNC_11(VAR_8, VAR_5);




 FUNC_5(VAR_8, VAR_6);

 VAR_9 = FUNC_6();
 if (VAR_9)
  goto err_alloc;




 FUNC_8(VAR_3, ((void*)0), 1);
 VAR_9 = FUNC_13();
 if (VAR_9)
  goto err_alloc;

 FUNC_14();

 return 0;

err_alloc:
 FUNC_7();
 FUNC_2(VAR_8, VAR_1);

err_unregister:
 FUNC_1(&VAR_2);

err_cleanup:
 FUNC_3();

 return VAR_9;
}
