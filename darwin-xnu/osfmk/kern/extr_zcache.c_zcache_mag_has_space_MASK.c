
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcc_magazine {scalar_t__ zcc_magazine_index; scalar_t__ zcc_magazine_capacity; } ;



bool FUNC_0(struct zcc_magazine *VAR_0)
{
 return (VAR_0->zcc_magazine_index < VAR_0->zcc_magazine_capacity);
}
