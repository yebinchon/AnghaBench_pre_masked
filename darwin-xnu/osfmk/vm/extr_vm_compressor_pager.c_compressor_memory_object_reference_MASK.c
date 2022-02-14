
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int memory_object_t ;
typedef TYPE_1__* compressor_pager_t ;
struct TYPE_5__ {scalar_t__ cpgr_references; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(
 memory_object_t VAR_0)
{
 compressor_pager_t VAR_1;

 FUNC_2(VAR_0, VAR_1);
 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->cpgr_references > 0);
 VAR_1->cpgr_references++;
 FUNC_3(VAR_1);
}
