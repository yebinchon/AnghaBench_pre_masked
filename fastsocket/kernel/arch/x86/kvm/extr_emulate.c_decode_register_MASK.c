
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;



__attribute__((used)) static void *FUNC_0(u8 VAR_0, unsigned long *VAR_1,
        int VAR_2)
{
 void *VAR_3;

 VAR_3 = &VAR_1[VAR_0];
 if (VAR_2 && VAR_0 >= 4 && VAR_0 < 8)
  VAR_3 = (unsigned char *)&VAR_1[VAR_0 & 3] + 1;
 return VAR_3;
}
