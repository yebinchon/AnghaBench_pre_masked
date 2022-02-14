
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto_input_entry {scalar_t__ protocol; TYPE_1__* domain; int (* input ) (scalar_t__,int *) ;scalar_t__ chain; struct proto_input_entry* next; } ;
typedef scalar_t__ protocol_family_t ;
typedef int * mbuf_t ;
typedef int errno_t ;
struct TYPE_2__ {int dom_flags; int dom_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 struct proto_input_entry** VAR_1 ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (scalar_t__,int *) ;

errno_t
FUNC_7(protocol_family_t VAR_2, mbuf_t VAR_3)
{
 struct proto_input_entry *VAR_4;
 errno_t VAR_5 = 0, VAR_6 = 0;

 for (VAR_4 = VAR_1[FUNC_4(VAR_2)]; VAR_4 != ((void*)0);
     VAR_4 = VAR_4->next) {
  if (VAR_4->protocol == VAR_2)
   break;
 }

 if (VAR_4 == ((void*)0))
  return (-1);

 if (VAR_4->domain && !(VAR_4->domain->dom_flags & VAR_0)) {
  FUNC_0(VAR_4->domain->dom_mtx);
  VAR_5 = 1;
 }

 if (VAR_4->chain) {
  VAR_4->input(VAR_4->protocol, VAR_3);
 } else {
  mbuf_t VAR_7;

  for (VAR_7 = VAR_3; VAR_7 != ((void*)0);
      VAR_7 = VAR_3) {
   VAR_3 = FUNC_2(VAR_7);
   FUNC_3(VAR_7, ((void*)0));
   VAR_4->input(VAR_4->protocol, VAR_7);
  }
 }

 if (VAR_5) {
  FUNC_1(VAR_4->domain->dom_mtx);
 }
 return (VAR_6);
}
