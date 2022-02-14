
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int* allocated; int ref; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_1(struct cfq_queue *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = VAR_2->allocated[VAR_0] + VAR_2->allocated[VAR_1];
 VAR_3 = VAR_2->ref - VAR_4;
 FUNC_0(VAR_3 < 0);
 return VAR_3;
}
