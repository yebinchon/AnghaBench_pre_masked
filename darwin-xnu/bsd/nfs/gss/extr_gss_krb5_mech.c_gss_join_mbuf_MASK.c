
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mbuf_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

mbuf_t
FUNC_2(mbuf_t VAR_0, mbuf_t VAR_1, mbuf_t VAR_2)
{
 mbuf_t VAR_3;

 for (VAR_3 = VAR_0; VAR_3 && FUNC_0(VAR_3); VAR_3 = FUNC_0(VAR_3))
  ;
 if (VAR_3)
  FUNC_1(VAR_3, VAR_1);
 for (VAR_3 = VAR_1; VAR_3 && FUNC_0(VAR_3); VAR_3 = FUNC_0(VAR_3))
  ;
 if (VAR_3)
  FUNC_1(VAR_3, VAR_2);
 VAR_3 = VAR_0 ? VAR_0 : (VAR_1 ? VAR_1 : VAR_2);
 return (VAR_3);
}
