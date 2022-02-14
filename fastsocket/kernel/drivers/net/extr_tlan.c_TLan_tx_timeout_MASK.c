
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int trans_start; int name; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{

 FUNC_0( VAR_0, "%s: Transmit timed out.\n", VAR_3->name);


 FUNC_1( VAR_3 );
 FUNC_4( VAR_3 );
 FUNC_2( VAR_3, VAR_1 );
 FUNC_3( VAR_3 );
 VAR_3->trans_start = VAR_2;
 FUNC_5( VAR_3 );

}
