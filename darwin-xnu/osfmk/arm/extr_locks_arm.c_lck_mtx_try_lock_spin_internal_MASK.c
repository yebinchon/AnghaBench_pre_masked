
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lck_mtx_t ;
typedef scalar_t__ boolean_t ;


 uintptr_t VAR_0 ;
 scalar_t__ VAR_1 ;
 uintptr_t VAR_2 ;
 uintptr_t VAR_3 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 uintptr_t FUNC_5 (int *) ;
 int FUNC_6 (int *,uintptr_t) ;
 int FUNC_7 (char*,int *) ;

__attribute__((used)) static inline boolean_t
FUNC_8(lck_mtx_t *VAR_6, boolean_t VAR_7)
{
 uintptr_t VAR_8;

 if (!FUNC_2(VAR_6))
  return VAR_1;
 VAR_8 = FUNC_5(VAR_6);
 if(FUNC_0(VAR_8)) {

  if (VAR_7)
   FUNC_3(VAR_6);
  else



   FUNC_7("Spin-mutex held as full mutex %p", VAR_6);
  return VAR_1;
 }
 VAR_8 &= VAR_0;
 VAR_8 |= (VAR_3 | VAR_2);
 FUNC_6(VAR_6, VAR_8);
 FUNC_4();




 return VAR_5;
}
