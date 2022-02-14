
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static kern_return_t
FUNC_9(void)
{

 if (VAR_5 && VAR_4 && VAR_3 && VAR_2)
  return VAR_1;


 if (!(VAR_5 = FUNC_3()))
  goto nomem_out;

 FUNC_5(VAR_5);

 if (!(VAR_4 = FUNC_2("uccode_lock", VAR_5)))
  goto nomem_out;


 if (!(VAR_3 = FUNC_0()))
  goto nomem_out;





 if (!(VAR_2 = FUNC_7(VAR_4, VAR_3)))
  goto nomem_out;

 return VAR_1;

nomem_out:

 if (VAR_2)
  FUNC_8(VAR_2, VAR_4);
 if (VAR_3)
  FUNC_1(VAR_3);
 if (VAR_4)
  FUNC_6(VAR_4);
 if (VAR_5)
  FUNC_4(VAR_5);

 return VAR_0;
}
