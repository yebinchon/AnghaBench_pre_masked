
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_flash {int if_length; int if_csum; } ;



__attribute__((used)) static u8 FUNC_0(struct ipath_flash *VAR_0, int VAR_1)
{
 u8 *VAR_2 = (u8 *) VAR_0;
 u8 VAR_3 = 0, VAR_4;






 VAR_4 = VAR_0->if_length;
 if (VAR_4 > sizeof(struct ipath_flash))
  VAR_4 = sizeof(struct ipath_flash);
 while (VAR_4--)
  VAR_3 += *VAR_2++;
 VAR_3 -= VAR_0->if_csum;
 VAR_3 = ~VAR_3;
 if (VAR_1)
  VAR_0->if_csum = VAR_3;

 return VAR_3;
}
