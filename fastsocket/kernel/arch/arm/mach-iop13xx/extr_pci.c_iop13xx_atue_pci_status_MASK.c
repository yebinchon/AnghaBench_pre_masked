
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (char*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9 = 0;






 VAR_8 = FUNC_3(VAR_2);
 if (VAR_8 & VAR_6) {
  FUNC_1("\t\t\tPCI error: ATUSR %#08x", VAR_8);
  if(VAR_7)
   FUNC_5(VAR_8 & VAR_6,
    VAR_2);
  VAR_9++;
 }


 VAR_8 = FUNC_2(VAR_0);
 if (VAR_8 & VAR_1) {
  FUNC_1("\t\t\tPCI error: ATUISR %#08x", VAR_8);
  if (VAR_7)
   FUNC_5(VAR_8 & VAR_1,
    VAR_0);
  VAR_9++;


  if (VAR_8 & VAR_5) {

   VAR_8 = FUNC_2(VAR_4) &
     ~(FUNC_2(VAR_3));

   if (VAR_8) {
    FUNC_1("\t\t\tPCI-E error: ATUE_PIE_STS %#08x",
     FUNC_2(VAR_4));
    VAR_9++;
   } else {
    FUNC_1("\t\t\tPCI-E error: ATUE_PIE_STS %#08x",
     FUNC_2(VAR_4));
    FUNC_1("\t\t\tPCI-E error: ATUE_PIE_MSK %#08x",
     FUNC_2(VAR_3));
    FUNC_0();
   }

   if(VAR_7)
    FUNC_4(VAR_8, VAR_4);
  }
 }

 return VAR_9;
}
