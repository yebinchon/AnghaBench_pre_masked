
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kev_msg {scalar_t__ vendor_code; scalar_t__ kev_class; scalar_t__ kev_subclass; scalar_t__ event_code; } ;
typedef int protocol_family_t ;
typedef int ifnet_t ;
typedef int * ifaddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (int ,int ***,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(ifnet_t VAR_5, protocol_family_t VAR_6,
    const struct kev_msg *VAR_7)
{
#pragma unused(protocol)
 ifaddr_t *VAR_8;

 if (VAR_7->vendor_code != VAR_4 ||
     VAR_7->kev_class != VAR_3 ||
     VAR_7->kev_subclass != VAR_2 ||
     VAR_7->event_code != VAR_1) {
  return;
 }

 if (FUNC_1(VAR_5, &VAR_8, VAR_0) == 0) {
  int VAR_9;

  for (VAR_9 = 0; VAR_8[VAR_9] != ((void*)0); VAR_9++) {
   FUNC_2(VAR_5, VAR_8[VAR_9]);
  }

  FUNC_0(VAR_8);
 }
}
