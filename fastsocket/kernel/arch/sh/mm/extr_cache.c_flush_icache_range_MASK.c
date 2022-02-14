
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flusher_data {unsigned long addr1; unsigned long addr2; int * vma; } ;


 int FUNC_0 (int ,void*,int) ;
 int VAR_0 ;

void FUNC_1(unsigned long VAR_1, unsigned long VAR_2)
{
 struct flusher_data VAR_3;

 VAR_3.vma = ((void*)0);
 VAR_3.addr1 = VAR_1;
 VAR_3.addr2 = VAR_2;

 FUNC_0(VAR_0, (void *)&VAR_3, 1);
}
