
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {scalar_t__ port; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct board_info *VAR_1, unsigned int VAR_2)
{
 FUNC_1(FUNC_0(VAR_1->port) & ~VAR_0, VAR_1->port + 1);
 FUNC_1(0, VAR_1->port + 1);
}
