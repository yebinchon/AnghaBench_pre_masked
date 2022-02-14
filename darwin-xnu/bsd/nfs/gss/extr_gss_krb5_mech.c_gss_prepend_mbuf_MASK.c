
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mbuf_t ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,size_t,int ) ;
 int FUNC_4 (int ,int *,size_t) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,size_t) ;
 int * FUNC_7 (int *,int *,size_t) ;

errno_t
FUNC_8(mbuf_t *VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 uint8_t *VAR_4 = FUNC_0(*VAR_1);
 size_t VAR_5 = FUNC_1(*VAR_1);
 size_t VAR_6 = FUNC_5(*VAR_1);
 size_t VAR_7 = FUNC_2(*VAR_1);
 errno_t VAR_8;

 if (VAR_3 > VAR_5 && VAR_3 <= VAR_5 + VAR_6) {
  VAR_4 = FUNC_7(VAR_4 + VAR_3 - VAR_5, VAR_4, VAR_7);
  FUNC_4(*VAR_1, VAR_4, VAR_7);
 }

 VAR_8 = FUNC_3(VAR_1, VAR_3, VAR_0);
 if (VAR_8)
  return (VAR_8);
 VAR_4 = FUNC_0(*VAR_1);
 FUNC_6(VAR_4, VAR_2, VAR_3);

 return (0);
}
