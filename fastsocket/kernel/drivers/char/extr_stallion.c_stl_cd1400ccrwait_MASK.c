
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int brdnr; int panelnr; int portnr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct stlport*,int ) ;

__attribute__((used)) static void FUNC_2(struct stlport *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (FUNC_1(VAR_2, VAR_0) == 0)
   return;

 FUNC_0("STALLION: cd1400 not responding, port=%d panel=%d brd=%d\n",
  VAR_2->portnr, VAR_2->panelnr, VAR_2->brdnr);
}
