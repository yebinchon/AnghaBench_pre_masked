
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {int exceptions_per_area; } ;
typedef int chunk_t ;


 int VAR_0 ;

__attribute__((used)) static chunk_t FUNC_0(struct pstore *VAR_1, chunk_t VAR_2)
{
 return VAR_0 + ((VAR_1->exceptions_per_area + 1) * VAR_2);
}
