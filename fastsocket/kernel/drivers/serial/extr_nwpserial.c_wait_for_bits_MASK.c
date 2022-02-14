
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nwpserial_port {int dcr_host; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct nwpserial_port *VAR_1, int VAR_2)
{
 unsigned int VAR_3, VAR_4 = 10000;


 do {
  VAR_3 = FUNC_0(VAR_1->dcr_host, VAR_0);

  if (--VAR_4 == 0)
   break;
  FUNC_1(1);
 } while ((VAR_3 & VAR_2) != VAR_2);
}
