
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pmcraid_ioasc_error {scalar_t__ ioasc_code; } ;


 int FUNC_0 (struct pmcraid_ioasc_error*) ;
 struct pmcraid_ioasc_error* VAR_0 ;

__attribute__((used)) static struct pmcraid_ioasc_error *FUNC_1(u32 VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].ioasc_code == VAR_1)
   return &VAR_0[VAR_2];
 }
 return ((void*)0);
}
