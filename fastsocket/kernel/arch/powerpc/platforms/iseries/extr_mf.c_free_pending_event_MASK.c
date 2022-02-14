
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_event {struct pending_event* next; } ;


 struct pending_event* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pending_event *VAR_1)
{
 if (VAR_1 != ((void*)0)) {
  VAR_1->next = VAR_0;
  VAR_0 = VAR_1;
 }
}
