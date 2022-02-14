
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst25l_flash {int spi; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (struct sst25l_flash*,int*) ;

__attribute__((used)) static int FUNC_2(struct sst25l_flash *VAR_8, int VAR_9)
{
 unsigned char VAR_10[2];
 int VAR_11, VAR_12;

 VAR_10[0] = VAR_9 ? VAR_3 : VAR_2;
 VAR_12 = FUNC_0(VAR_8->spi, VAR_10, 1);
 if (VAR_12)
  return VAR_12;

 VAR_10[0] = VAR_1;
 VAR_12 = FUNC_0(VAR_8->spi, VAR_10, 1);
 if (VAR_12)
  return VAR_12;

 VAR_10[0] = VAR_4;
 VAR_10[1] = VAR_9 ? 0 : VAR_5 | VAR_6;
 VAR_12 = FUNC_0(VAR_8->spi, VAR_10, 2);
 if (VAR_12)
  return VAR_12;

 if (VAR_9) {
  VAR_12 = FUNC_1(VAR_8, &VAR_11);
  if (VAR_12)
   return VAR_12;
  if (!(VAR_11 & VAR_7))
   return -VAR_0;
 }

 return 0;
}
