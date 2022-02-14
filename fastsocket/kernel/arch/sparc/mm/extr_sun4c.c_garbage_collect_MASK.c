
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static inline void FUNC_2(int VAR_2)
{
 int VAR_3, VAR_4;


 VAR_2 &= ~31;
 VAR_3 = VAR_2;
 for (VAR_4 = (VAR_3 + 32); VAR_3 < VAR_4; VAR_3++)
  if (VAR_1[VAR_3] != VAR_0)
   return;


 FUNC_1(FUNC_0(VAR_2));
}
