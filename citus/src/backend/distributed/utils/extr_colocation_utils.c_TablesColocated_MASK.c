
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

bool
FUNC_1(Oid VAR_1, Oid VAR_2)
{
 uint32 VAR_3 = VAR_0;
 uint32 VAR_4 = VAR_0;

 if (VAR_1 == VAR_2)
 {
  return 1;
 }

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_3 == VAR_0 ||
  VAR_4 == VAR_0)
 {
  return 0;
 }

 return VAR_3 == VAR_4;
}
