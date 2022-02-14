
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBType; int SiS_VBInfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_1 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_4, unsigned short VAR_5, unsigned short VAR_6,
                unsigned short VAR_7)
{

   if(VAR_4->SiS_VBType & VAR_3) {

      if(VAR_4->SiS_VBInfo & VAR_1) {
         FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
      } else {
  if((VAR_4->SiS_VBType & VAR_2) && (VAR_4->SiS_VBInfo & VAR_0)) {

     FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
  } else {
     FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
  }
      }

   } else {

      FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);

   }
}
