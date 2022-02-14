
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

void *FUNC_1(int VAR_3, void *VAR_4)
{
 unsigned long VAR_5 = (unsigned long) VAR_4;
 unsigned long VAR_6 = VAR_2[VAR_3];

 VAR_2[VAR_3] = VAR_5;
 if (VAR_3 == 0 && VAR_0) {
  *(u32 *)(VAR_1 + 0x200) = 0x08000000 |
       (0x03ffffff & (VAR_5 >> 2));
  FUNC_0(VAR_1 + 0x200, VAR_1 + 0x204);
 }
 return (void *)VAR_6;
}
