
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {int (* read ) (struct mii_bus*,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mii_bus*,int,int,int) ;
 int FUNC_1 (struct mii_bus*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_1, int VAR_2, int VAR_3,
     int VAR_4)
{
 u32 VAR_5;

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);


 VAR_5 = VAR_1->read(VAR_1, VAR_4, VAR_0);

 return VAR_5;
}
