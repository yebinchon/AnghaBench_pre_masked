
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbuf_class_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_3(mbuf_class_t VAR_3)
{

 if (VAR_2)
  return (VAR_1);

 if (FUNC_2(VAR_3) > FUNC_1(VAR_3) &&
     FUNC_2(VAR_3) >= (FUNC_0(VAR_3) >> 4) &&
     (FUNC_2(VAR_3) - FUNC_1(VAR_3)) >= (FUNC_1(VAR_3) >> 5))
  return (VAR_1);
 return (VAR_0);
}
