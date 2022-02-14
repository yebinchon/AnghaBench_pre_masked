
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ cpu_active_thread; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (size_t) ;
 size_t VAR_2 ;
 size_t VAR_3 ;

uint32_t FUNC_3(uintptr_t VAR_4) {
 uint32_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if ((VAR_1[VAR_5] != ((void*)0)) && ((uintptr_t)VAR_1[VAR_5]->cpu_active_thread == VAR_4)) {
   VAR_3 = VAR_5;
   if ((uint32_t) FUNC_1() != VAR_5) {

    FUNC_0(FUNC_2(VAR_5), VAR_0);
   }
   break;
  }
 }

 return VAR_3;
}
