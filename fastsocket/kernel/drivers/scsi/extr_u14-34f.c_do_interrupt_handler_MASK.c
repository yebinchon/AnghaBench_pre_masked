
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 TYPE_1__** VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5) {
   unsigned int VAR_6;
   unsigned long VAR_7;
   irqreturn_t VAR_8;


   if ((VAR_6 = (unsigned int)((char *)VAR_5 - VAR_3)) >= VAR_1) return VAR_0;

   FUNC_1(VAR_2[VAR_6]->host_lock, VAR_7);
   VAR_8 = FUNC_0(VAR_6);
   FUNC_2(VAR_2[VAR_6]->host_lock, VAR_7);
   return VAR_8;
}
