
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device {void (* callback ) (struct mapleq*) ;unsigned long interval; int when; int function; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;

void FUNC_1(struct maple_device *VAR_1,
   void (*VAR_2) (struct mapleq *VAR_3),
   unsigned long VAR_4, unsigned long VAR_5)
{
 VAR_1->callback = VAR_2;
 VAR_1->interval = VAR_4;
 VAR_1->function = FUNC_0(VAR_5);
 VAR_1->when = VAR_0;
}
