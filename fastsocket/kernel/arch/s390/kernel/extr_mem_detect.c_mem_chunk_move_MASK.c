
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_chunk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mem_chunk*,struct mem_chunk*,int) ;

__attribute__((used)) static void FUNC_1(struct mem_chunk VAR_1[], int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_0 - VAR_2;

 FUNC_0(&VAR_1[VAR_2], &VAR_1[VAR_3], VAR_4 * sizeof(struct mem_chunk));
}
