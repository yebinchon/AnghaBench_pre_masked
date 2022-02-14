
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct overlay {unsigned int pos_increment; int size; scalar_t__ pos; } ;



__attribute__((used)) static void FUNC_0(struct overlay *VAR_0)
{
   VAR_0->pos = 0;


   VAR_0->pos_increment = (VAR_0->size / 2) ? ((unsigned)(VAR_0->size / 2)) : 8;
}
