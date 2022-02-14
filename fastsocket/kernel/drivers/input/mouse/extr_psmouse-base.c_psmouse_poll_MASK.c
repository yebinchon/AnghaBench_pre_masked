
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int pktsize; int packet; int ps2dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_1)
{
 return FUNC_0(&VAR_1->ps2dev, VAR_1->packet,
      VAR_0 | (VAR_1->pktsize << 8));
}
