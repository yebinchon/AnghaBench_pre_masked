
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_vport {scalar_t__ fc_myDID; } ;
struct lpfc_nodelist {scalar_t__ nlp_DID; } ;
struct TYPE_4__ {scalar_t__ domain; scalar_t__ area; scalar_t__ id; } ;
struct TYPE_5__ {scalar_t__ word; TYPE_1__ b; } ;
struct TYPE_6__ {TYPE_2__ un; } ;
typedef TYPE_3__ D_ID ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct lpfc_vport *VAR_1, struct lpfc_nodelist *VAR_2,
       uint32_t VAR_3)
{
 D_ID VAR_4, VAR_5, VAR_6;

 if (VAR_3 == VAR_0)
  return 0;


 if (VAR_2->nlp_DID == VAR_3)
  return 1;


 VAR_4.un.word = VAR_1->fc_myDID;
 if ((VAR_4.un.b.domain == 0) && (VAR_4.un.b.area == 0)) {
  return 0;
 }

 VAR_6.un.word = VAR_3;
 VAR_5.un.word = VAR_2->nlp_DID;
 if (VAR_6.un.b.id == VAR_5.un.b.id) {
  if ((VAR_4.un.b.domain == VAR_6.un.b.domain) &&
      (VAR_4.un.b.area == VAR_6.un.b.area)) {
   if ((VAR_5.un.b.domain == 0) &&
       (VAR_5.un.b.area == 0)) {
    if (VAR_5.un.b.id)
     return 1;
   }
   return 0;
  }

  VAR_6.un.word = VAR_2->nlp_DID;
  if ((VAR_4.un.b.domain == VAR_5.un.b.domain) &&
      (VAR_4.un.b.area == VAR_5.un.b.area)) {
   if ((VAR_6.un.b.domain == 0) &&
       (VAR_6.un.b.area == 0)) {
    if (VAR_6.un.b.id)
     return 1;
   }
  }
 }
 return 0;
}
