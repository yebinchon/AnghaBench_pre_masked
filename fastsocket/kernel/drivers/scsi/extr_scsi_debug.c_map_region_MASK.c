
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (scalar_t__,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(sector_t VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 sector_t VAR_8 = VAR_4 + VAR_5;

 VAR_6 = VAR_3;
 VAR_7 = VAR_6 - VAR_2;

 while (VAR_4 < VAR_8) {
  sector_t VAR_9, VAR_10;

  VAR_9 = VAR_4 + VAR_7;
  VAR_10 = FUNC_0(VAR_9, VAR_6);

  if (VAR_9 < VAR_0)
   FUNC_1(VAR_9, VAR_1);

  VAR_4 += VAR_6 - VAR_10;
 }
}
