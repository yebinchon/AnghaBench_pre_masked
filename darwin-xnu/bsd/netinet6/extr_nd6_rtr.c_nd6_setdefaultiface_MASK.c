
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
typedef struct ifnet* ifnet_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ifnet*) ;
 int VAR_3 ;
 char* FUNC_2 (struct ifnet*) ;
 struct ifnet** VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 struct ifnet* VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ifnet*) ;

int
FUNC_10(
 int VAR_8)
{
 int VAR_9 = 0;
 ifnet_t VAR_10 = ((void*)0);

 FUNC_0(VAR_7, VAR_1);

 FUNC_4();
 if (VAR_8 < 0 || VAR_3 < VAR_8) {
  FUNC_3();
  return (VAR_0);
 }
 VAR_10 = VAR_4[VAR_8];
 FUNC_3();

 FUNC_5(VAR_7);
 if (VAR_5 != VAR_8) {
  struct ifnet *VAR_11 = VAR_6;

  VAR_5 = VAR_8;
  if (VAR_5 > 0)
   VAR_6 = VAR_10;
  else
   VAR_6 = ((void*)0);

  if (VAR_6 != ((void*)0))
   FUNC_8((VAR_2, "%s: is now the default "
       "interface (was %s)\n", FUNC_2(VAR_6),
       VAR_11 != ((void*)0) ? FUNC_2(VAR_11) : "NONE"));
  else
   FUNC_8((VAR_2, "No default interface set\n"));
  if (VAR_11 != ((void*)0)) {
   FUNC_1(VAR_11);
  }

  if (VAR_6 != ((void*)0)) {
   FUNC_1(VAR_6);
   FUNC_7(VAR_6);
  }






  FUNC_9(VAR_6);
 }
 FUNC_6(VAR_7);
 return (VAR_9);
}
