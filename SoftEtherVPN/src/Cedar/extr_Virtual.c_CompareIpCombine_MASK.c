
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Id; scalar_t__ DestIP; scalar_t__ SrcIP; scalar_t__ Protocol; } ;
typedef TYPE_1__ IP_COMBINE ;



int FUNC_0(void *VAR_0, void *VAR_1)
{
 IP_COMBINE *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(IP_COMBINE **)VAR_0;
 VAR_3 = *(IP_COMBINE **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }
 if (VAR_2->Id > VAR_3->Id)
 {
  return 1;
 }
 else if (VAR_2->Id < VAR_3->Id)
 {
  return -1;
 }
 else if (VAR_2->DestIP > VAR_3->DestIP)
 {
  return 1;
 }
 else if (VAR_2->DestIP < VAR_3->DestIP)
 {
  return -1;
 }
 else if (VAR_2->SrcIP > VAR_3->SrcIP)
 {
  return 1;
 }
 else if (VAR_2->SrcIP < VAR_3->SrcIP)
 {
  return -1;
 }
 else if (VAR_2->Protocol > VAR_3->Protocol)
 {
  return 1;
 }
 else if (VAR_2->Protocol < VAR_3->Protocol)
 {
  return -1;
 }
 return 0;
}
