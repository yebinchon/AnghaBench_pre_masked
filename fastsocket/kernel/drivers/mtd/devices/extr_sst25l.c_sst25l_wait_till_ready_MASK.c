
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst25l_flash {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct sst25l_flash*,int*) ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct sst25l_flash *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_3 + VAR_1;
 do {
  VAR_7 = FUNC_1(VAR_4, &VAR_6);
  if (VAR_7)
   return VAR_7;
  if (!(VAR_6 & VAR_2))
   return 0;

  FUNC_0();
 } while (!FUNC_2(VAR_3, VAR_5));

 return -VAR_0;
}
