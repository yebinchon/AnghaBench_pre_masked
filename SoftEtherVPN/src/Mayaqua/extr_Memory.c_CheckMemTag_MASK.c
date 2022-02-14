
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Magic; } ;
typedef TYPE_1__ MEMTAG ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;

void FUNC_2(MEMTAG *VAR_1)
{
 if (FUNC_1() == 0)
 {
  return;
 }


 if (VAR_1 == ((void*)0))
 {
  FUNC_0("CheckMemTag: tag == NULL");
  return;
 }

 if (VAR_1->Magic != VAR_0)
 {
  FUNC_0("CheckMemTag: tag->Magic != MEMTAG_MAGIC");
  return;
 }
}
