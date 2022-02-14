
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_input_entry {scalar_t__ protocol; void* inject_last; int * inject_first; struct proto_input_entry* next; } ;
struct dlil_threading_info {int input_waiting; int input_lck; } ;
typedef scalar_t__ protocol_family_t ;
typedef void* mbuf_t ;
typedef int errno_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dlil_threading_info* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (void*) ;
 int FUNC_3 (void*,void*) ;
 struct proto_input_entry** VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;

errno_t
FUNC_6(protocol_family_t VAR_6, mbuf_t VAR_7)
{
 struct proto_input_entry *VAR_8;
 mbuf_t VAR_9;
 int VAR_10 = FUNC_4(VAR_6);
 struct dlil_threading_info *VAR_11 = VAR_3;

 for (VAR_9 = VAR_7; FUNC_2(VAR_9) != ((void*)0);
     VAR_9 = FUNC_2(VAR_9))
                            ;

 for (VAR_8 = VAR_4[VAR_10]; VAR_8 != ((void*)0);
     VAR_8 = VAR_8->next) {
  if (VAR_8->protocol == VAR_6)
   break;
 }

 if (VAR_8 != ((void*)0)) {
  FUNC_0(&VAR_11->input_lck);
  if (VAR_8->inject_first == ((void*)0)) {
   VAR_5++;
   VAR_11->input_waiting |= VAR_1;
   VAR_8->inject_first = VAR_7;
  } else {
   FUNC_3(VAR_8->inject_last, VAR_7);
  }
  VAR_8->inject_last = VAR_9;
  if ((VAR_11->input_waiting & VAR_0) == 0) {
   FUNC_5((caddr_t)&VAR_11->input_waiting);
  }
  FUNC_1(&VAR_11->input_lck);
 } else {
  return (VAR_2);
 }

 return (0);
}
