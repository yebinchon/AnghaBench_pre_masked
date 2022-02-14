
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int board_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_6)
{
 board_info_t *VAR_7 = FUNC_2(VAR_6);


 FUNC_0(VAR_6, 0, VAR_5, VAR_0);
 FUNC_1(VAR_7, VAR_1, 0x01);
 FUNC_1(VAR_7, VAR_2, VAR_4);
 FUNC_1(VAR_7, VAR_3, 0x00);
}
