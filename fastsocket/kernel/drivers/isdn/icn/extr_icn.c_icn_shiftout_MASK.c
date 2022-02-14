
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_char ;


 int FUNC_0 (int,unsigned short) ;

__attribute__((used)) static inline void
FUNC_1(unsigned short VAR_0,
      unsigned long VAR_1,
      int VAR_2,
      int VAR_3)
{

 register u_char VAR_4;
 register u_char VAR_5;

 for (VAR_4 = VAR_2, VAR_5 = VAR_3; VAR_5 > 0; VAR_4--, VAR_5--)
  FUNC_0((u_char) ((VAR_1 >> VAR_4) & 1) ? 0xff : 0, VAR_0);
}
