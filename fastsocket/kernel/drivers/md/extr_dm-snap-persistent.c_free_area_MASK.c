
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {int * header_area; int * zero_area; int * area; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pstore *VAR_0)
{
 if (VAR_0->area)
  FUNC_0(VAR_0->area);
 VAR_0->area = ((void*)0);

 if (VAR_0->zero_area)
  FUNC_0(VAR_0->zero_area);
 VAR_0->zero_area = ((void*)0);

 if (VAR_0->header_area)
  FUNC_0(VAR_0->header_area);
 VAR_0->header_area = ((void*)0);
}
