
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_input_entry {scalar_t__ protocol; struct proto_input_entry* next; int (* detached ) (scalar_t__) ;} ;


 int FUNC_0 (struct proto_input_entry*,int ) ;
 int VAR_0 ;
 struct proto_input_entry** VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct proto_input_entry *VAR_2)
{
 struct proto_input_entry *VAR_3;

 for (VAR_3 = VAR_2->next; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
  struct proto_input_entry *VAR_4;
  int VAR_5;

  VAR_5 = FUNC_1(VAR_2->protocol);
  VAR_3 = VAR_2->next;

  for (VAR_4 = VAR_1[VAR_5]; VAR_4 != ((void*)0);
      VAR_4 = VAR_4->next) {
   if (VAR_4->protocol == VAR_2->protocol)
    break;
  }


  if (VAR_4 != ((void*)0)) {
   if (VAR_2->detached)
    VAR_2->detached(VAR_2->protocol);
   FUNC_0(VAR_2, VAR_0);
  } else {
   VAR_2->next = VAR_1[VAR_5];
   VAR_1[VAR_5] = VAR_2;
  }
 }
}
