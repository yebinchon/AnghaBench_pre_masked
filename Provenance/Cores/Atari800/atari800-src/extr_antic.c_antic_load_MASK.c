
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int,int *,int) ;
 int FUNC_1 (int,int *,int) ;
 void* FUNC_2 (int ) ;
 int * VAR_2 ;
 int* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(void)
{
 UWORD VAR_6 = VAR_5 + VAR_3[VAR_4];
 if ((VAR_5 ^ VAR_6) & 0xf000) {
  int VAR_7 = (-VAR_5) & 0xfff;
  if (VAR_1 != ((void*)0) && VAR_5 < 0x8000 && VAR_5 >= 0x4000) {
   FUNC_3(VAR_2 + VAR_0, VAR_1 + (VAR_5 - 0x4000), VAR_7);
   if (VAR_6 & 0xfff)
    FUNC_3(VAR_2 + VAR_0 + VAR_7, VAR_1 + (VAR_5 + VAR_7 - 0x5000), VAR_6 & 0xfff);
  }
  else if ((VAR_5 & 0xf000) == 0xd000) {
   FUNC_0(VAR_5, VAR_2 + VAR_0, VAR_7);
   if (VAR_6 & 0xfff)
    FUNC_0((UWORD) (VAR_5 + VAR_7 - 0x1000), VAR_2 + VAR_0 + VAR_7, VAR_6 & 0xfff);
  }
  else {
   FUNC_1(VAR_5, VAR_2 + VAR_0, VAR_7);
   if (VAR_6 & 0xfff)
    FUNC_1(VAR_5 + VAR_7 - 0x1000, VAR_2 + VAR_0 + VAR_7, VAR_6 & 0xfff);
  }
  VAR_5 = VAR_6 - 0x1000;
 }
 else {
  if (VAR_1 != ((void*)0) && VAR_5 < 0x8000 && VAR_5 >= 0x4000)
   FUNC_3(VAR_2 + VAR_0, VAR_1 + (VAR_5 - 0x4000), VAR_3[VAR_4]);
  else if ((VAR_5 & 0xf000) == 0xd000)
   FUNC_0(VAR_5, VAR_2 + VAR_0, VAR_3[VAR_4]);
  else
   FUNC_1(VAR_5, VAR_2 + VAR_0, VAR_3[VAR_4]);
  VAR_5 = VAR_6;
 }

}
