
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {int (* read ) (struct mii_bus*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mii_bus*,int,int ) ;
 int FUNC_1 (struct mii_bus*,int,int ) ;

int FUNC_2(struct mii_bus *VAR_3, int VAR_4, u32 *VAR_5)
{
 int VAR_6;



 VAR_6 = VAR_3->read(VAR_3, VAR_4, VAR_1);

 if (VAR_6 < 0)
  return -VAR_0;

 *VAR_5 = (VAR_6 & 0xffff) << 16;


 VAR_6 = VAR_3->read(VAR_3, VAR_4, VAR_2);

 if (VAR_6 < 0)
  return -VAR_0;

 *VAR_5 |= (VAR_6 & 0xffff);

 return 0;
}
