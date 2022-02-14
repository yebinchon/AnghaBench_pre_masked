
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdricoh_host {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (struct sdricoh_host*,int ) ;
 int FUNC_1 (struct sdricoh_host*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct sdricoh_host *VAR_8, unsigned char VAR_9,
      unsigned int VAR_10)
{
 unsigned int VAR_11;
 int VAR_12 = 0;
 unsigned int VAR_13 = 0;

 FUNC_1(VAR_8, VAR_4, 0x18);

 FUNC_1(VAR_8, VAR_3, VAR_10);
 FUNC_1(VAR_8, VAR_2, (0x10000 << 8) | VAR_9);

 if (VAR_9) {
  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
   VAR_11 = FUNC_0(VAR_8, VAR_4);
   FUNC_1(VAR_8, VAR_5, VAR_11);
   if (VAR_11 & VAR_6)
    break;
  }



  if (VAR_13 == VAR_0 || VAR_11 & VAR_7)
   VAR_12 = -VAR_1;

 }

 return VAR_12;

}
