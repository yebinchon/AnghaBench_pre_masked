
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst25l_flash {int spi; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct sst25l_flash *VAR_1, int *VAR_2)
{
 unsigned char VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = VAR_0;
 VAR_5 = FUNC_0(VAR_1->spi, &VAR_3, 1, &VAR_4, 1);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_2 = VAR_4;
 return 0;
}
