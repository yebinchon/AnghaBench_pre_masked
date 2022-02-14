
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_0, unsigned int VAR_1, __u8 *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = (VAR_3 > 15) ? 15 : VAR_3;

 FUNC_0(VAR_5, VAR_0 + VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_0(VAR_2[VAR_4], VAR_0 + VAR_1 + VAR_4 + 1);

 return VAR_5;
}
