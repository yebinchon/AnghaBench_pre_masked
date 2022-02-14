
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * internal_if; } ;
struct secpolicy {scalar_t__ refcnt; struct ipsecrequest* req; int * outgoing_if; int * ipsec_if; TYPE_1__ spidx; int state; } ;
struct ipsecrequest {struct ipsecrequest* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipsecrequest*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct secpolicy*,int ) ;
 scalar_t__ FUNC_3 (struct secpolicy*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (struct secpolicy*) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7(
    struct secpolicy *VAR_5)
{


 if (VAR_5 == ((void*)0))
  FUNC_6("key_delsp: NULL pointer is passed.\n");

 FUNC_1(VAR_4, VAR_1);
 VAR_5->state = VAR_0;

 if (VAR_5->refcnt > 0)
  return;


 if (FUNC_3(VAR_5)) {
  FUNC_2(VAR_5, VAR_2);
  VAR_3--;
 }

    if (VAR_5->spidx.internal_if) {
        FUNC_4(VAR_5->spidx.internal_if);
        VAR_5->spidx.internal_if = ((void*)0);
    }

    if (VAR_5->ipsec_if) {
        FUNC_4(VAR_5->ipsec_if);
        VAR_5->ipsec_if = ((void*)0);
    }

    if (VAR_5->outgoing_if) {
        FUNC_4(VAR_5->outgoing_if);
        VAR_5->outgoing_if = ((void*)0);
    }

    {
  struct ipsecrequest *VAR_6 = VAR_5->req, *VAR_7;

  while (VAR_6 != ((void*)0)) {
   VAR_7 = VAR_6->next;
   FUNC_0(VAR_6);
   VAR_6 = VAR_7;
     }
 }
 FUNC_5(VAR_5);

 return;
}
