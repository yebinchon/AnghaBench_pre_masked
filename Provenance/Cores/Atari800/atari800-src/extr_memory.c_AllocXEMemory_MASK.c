
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int UBYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 if (VAR_0 > 64) {


  ULONG VAR_3 = (1 + (VAR_0 - 64) / 16) * 16384;
  if (VAR_3 != VAR_2) {
   if (VAR_1 != ((void*)0))
    FUNC_1(VAR_1);
   VAR_1 = (UBYTE *) FUNC_0(VAR_3);
   VAR_2 = VAR_3;
   FUNC_2(VAR_1, 0, VAR_3);
  }
 }

 else if (VAR_1 != ((void*)0)) {
  FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
  VAR_2 = 0;
 }
}
