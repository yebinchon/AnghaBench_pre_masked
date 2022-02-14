
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

void
FUNC_1(struct ahc_softc *VAR_1, char *VAR_2)
{
 if (VAR_1->name != ((void*)0))
  FUNC_0(VAR_1->name, VAR_0);
 VAR_1->name = VAR_2;
}
