
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; int name; struct airo_info* ml_priv; } ;
struct airo_info {int * fids; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct airo_info*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*,int) ;
 scalar_t__ FUNC_5 (struct airo_info*,int ,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct airo_info*,int ,int) ;

int FUNC_8( struct net_device *VAR_4 )
{
 int VAR_5;
 struct airo_info *VAR_6 = VAR_4->ml_priv;

 if (FUNC_4 (VAR_4, 1))
  return -1;

 if ( FUNC_5(VAR_6, VAR_4->dev_addr, 1 ) != VAR_3 ) {
  FUNC_0(VAR_4->name, "MAC could not be enabled");
  return -1;
 }
 FUNC_1(VAR_4->name, "MAC enabled %pM", VAR_4->dev_addr);

 if (!FUNC_6(VAR_1,&VAR_6->flags))
  for( VAR_5 = 0; VAR_5 < VAR_2; VAR_5++ )
   VAR_6->fids[VAR_5] = FUNC_7 (VAR_6,VAR_0,VAR_5>=VAR_2/2);

 FUNC_2( VAR_6 );
 FUNC_3(VAR_4);
 return 0;
}
