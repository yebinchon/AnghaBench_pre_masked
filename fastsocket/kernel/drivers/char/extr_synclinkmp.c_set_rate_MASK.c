
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int SLMP_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2( SLMP_INFO *VAR_3, u32 VAR_4 )
{
        u32 VAR_5;
        unsigned char VAR_6;
 u32 VAR_7=0;



 if (VAR_4 != 0) {
  VAR_7 = 14745600/VAR_4;
  if (!VAR_7)
   VAR_7 = 1;

  VAR_5 = VAR_7;

  VAR_6 = 0;
  if (VAR_5 != 1 && VAR_5 != 2) {




   VAR_6 = 1;
   VAR_5 >>= 1;
  }




  for(; VAR_5 > 256 && VAR_6 < 10; VAR_6++)
   VAR_5 >>= 1;

  FUNC_1(VAR_3, VAR_2,
   (unsigned char)((FUNC_0(VAR_3, VAR_2) & 0xf0) | VAR_6));
  FUNC_1(VAR_3, VAR_0,
   (unsigned char)((FUNC_0(VAR_3, VAR_0) & 0xf0) | VAR_6));
  FUNC_1(VAR_3, VAR_1, (unsigned char)VAR_5);
 }
 else {
  FUNC_1(VAR_3, VAR_2,0);
  FUNC_1(VAR_3, VAR_0,0);
  FUNC_1(VAR_3, VAR_1, 0);
 }
}
