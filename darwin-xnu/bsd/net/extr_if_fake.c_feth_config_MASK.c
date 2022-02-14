
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * ifnet_t ;
typedef TYPE_1__* if_fake_ref ;
struct TYPE_4__ {int * iff_peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(ifnet_t VAR_6, ifnet_t VAR_7)
{
 int VAR_8 = VAR_2;
 int VAR_9 = VAR_2;
 int VAR_10 = 0;
 if_fake_ref VAR_11 = ((void*)0);

 FUNC_1();
 VAR_11 = FUNC_3(VAR_6);
 if (VAR_11 == ((void*)0)) {
  VAR_10 = VAR_1;
  goto done;
 }
 if (VAR_7 != ((void*)0)) {

  if_fake_ref VAR_12;

  VAR_12 = FUNC_3(VAR_7);
  if (VAR_12 == ((void*)0)) {
   VAR_10 = VAR_1;
   goto done;
  }
  if (FUNC_0(VAR_11) ||
      FUNC_0(VAR_12) ||
      VAR_12->iff_peer != ((void*)0) ||
      VAR_11->iff_peer != ((void*)0)) {
   VAR_10 = VAR_0;
   goto done;
  }
  VAR_11->iff_peer = VAR_7;
  VAR_12->iff_peer = VAR_6;
  VAR_8 = VAR_5;
 }
 else if (VAR_11->iff_peer != ((void*)0)) {

  if_fake_ref VAR_13;

  VAR_7 = VAR_11->iff_peer;
  VAR_13 = FUNC_3(VAR_7);
  if (VAR_13 == ((void*)0)) {

   VAR_10 = VAR_1;
   goto done;
  }
  VAR_11->iff_peer = ((void*)0);
  VAR_13->iff_peer = ((void*)0);
  VAR_9 = VAR_5;
 }

 done:
 FUNC_2();


 if (VAR_8) {
  FUNC_4(VAR_6, VAR_4);
  FUNC_4(VAR_7, VAR_4);
 }
 else if (VAR_9) {
  FUNC_4(VAR_6, VAR_3);
  FUNC_4(VAR_7, VAR_3);
 }
 return (VAR_10);
}
