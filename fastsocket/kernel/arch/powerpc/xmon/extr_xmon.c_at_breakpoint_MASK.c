
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpt {unsigned long address; scalar_t__ enabled; } ;


 int VAR_0 ;
 struct bpt* VAR_1 ;

__attribute__((used)) static struct bpt *FUNC_0(unsigned long VAR_2)
{
 int VAR_3;
 struct bpt *VAR_4;

 VAR_4 = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3, ++VAR_4)
  if (VAR_4->enabled && VAR_2 == VAR_4->address)
   return VAR_4;
 return ((void*)0);
}
