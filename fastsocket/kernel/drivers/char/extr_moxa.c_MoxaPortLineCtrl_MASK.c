
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct moxa_port {int tableAddr; int lineCtrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct moxa_port *VAR_3, int VAR_4, int VAR_5)
{
 u8 VAR_6 = 0;

 if (VAR_4)
  VAR_6 |= VAR_0;
 if (VAR_5)
  VAR_6 |= VAR_2;
 VAR_3->lineCtrl = VAR_6;
 FUNC_0(VAR_3->tableAddr, VAR_1, VAR_6);
}
