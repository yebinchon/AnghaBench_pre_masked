
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ TypeL4; scalar_t__ PayloadSize; int * Payload; } ;
typedef TYPE_1__ PKT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__,char*,int) ;

bool FUNC_1(PKT *VAR_2)
{

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->TypeL4 != VAR_1)
 {
  return 0;
 }

 if (VAR_2->Payload == ((void*)0) || VAR_2->PayloadSize == 0)
 {
  return 0;
 }

 if (FUNC_0(VAR_2->Payload, 0, VAR_2->PayloadSize, "NCSI", 4) != VAR_0)
 {
  return 1;
 }

 if (FUNC_0(VAR_2->Payload, 0, VAR_2->PayloadSize, ".jpeg", 5) != VAR_0)
 {
  return 1;
 }

 if (FUNC_0(VAR_2->Payload, 0, VAR_2->PayloadSize, ".jpg", 4) != VAR_0)
 {
  return 1;
 }

 if (FUNC_0(VAR_2->Payload, 0, VAR_2->PayloadSize, ".gif", 4) != VAR_0)
 {
  return 1;
 }

 if (FUNC_0(VAR_2->Payload, 0, VAR_2->PayloadSize, ".css", 4) != VAR_0)
 {
  return 1;
 }

 return 0;
}
