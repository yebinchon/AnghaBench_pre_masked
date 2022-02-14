
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ,int*,int*) ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_3)
{
 u32 VAR_4, VAR_5;

 FUNC_0(VAR_3, VAR_1, &VAR_4, &VAR_5);

 if (VAR_4 & 0x10) {
  VAR_4 = VAR_4 >> 1;
  VAR_4 &= 0x7;
 } else
  VAR_4 = VAR_0;

 if (VAR_4 != VAR_0)
  return VAR_2 * VAR_4 / 8;

 return VAR_2;
}
