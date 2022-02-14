
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct secasvar {scalar_t__ refcnt; int * sah; int state; } ;
struct secashead {struct secashead* identd; struct secashead* idents; int * ipsec_if; int sa_route; int * savtree; } ;


 int FUNC_0 (size_t,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct secashead*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 struct secasvar* FUNC_4 (struct secasvar*,int ) ;
 int FUNC_5 (struct secashead*,int ) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (size_t*) ;
 scalar_t__ FUNC_8 (struct secashead*) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct secasvar*,int ) ;
 int FUNC_11 (char*) ;
 int VAR_3 ;
 size_t* VAR_4 ;

void
FUNC_12(
     struct secashead *VAR_5)
{
 struct secasvar *VAR_6, *VAR_7;
 u_int VAR_8, VAR_9;
 int VAR_10 = 0;

 FUNC_2(VAR_3, VAR_1);


 if (VAR_5 == ((void*)0))
  FUNC_11("key_delsah: NULL pointer is passed.\n");


 for (VAR_8 = 0;
      VAR_8 < FUNC_7(VAR_4);
      VAR_8++) {

  VAR_9 = VAR_4[VAR_8];
  for (VAR_6 = (struct secasvar *)FUNC_3(&VAR_5->savtree[VAR_9]);
       VAR_6 != ((void*)0);
       VAR_6 = VAR_7) {

   VAR_7 = FUNC_4(VAR_6, VAR_2);

   if (VAR_6->refcnt > 0) {

    VAR_10++;
    continue;
   }


   FUNC_0(VAR_9, VAR_6->state, "key_delsah");

   FUNC_10(VAR_6, VAR_0);


   VAR_6->sah = ((void*)0);
   VAR_6 = ((void*)0);
  }
 }


 if (VAR_10)
  return;

 FUNC_6(&VAR_5->sa_route);

 if (VAR_5->ipsec_if) {
  FUNC_9(VAR_5->ipsec_if);
  VAR_5->ipsec_if = ((void*)0);
 }

    if (VAR_5->idents) {
        FUNC_1(VAR_5->idents);
    }

    if (VAR_5->identd) {
        FUNC_1(VAR_5->identd);
    }


 if (FUNC_8(VAR_5))
  FUNC_5(VAR_5, VAR_2);

 FUNC_1(VAR_5);

 return;
}
