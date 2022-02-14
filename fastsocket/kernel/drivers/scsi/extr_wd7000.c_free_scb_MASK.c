
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ Scb ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(Scb * VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_2, VAR_4);

 FUNC_0(VAR_3, 0, sizeof(Scb));
 VAR_3->next = VAR_1;
 VAR_1 = VAR_3;
 VAR_0++;

 FUNC_2(&VAR_2, VAR_4);
}
