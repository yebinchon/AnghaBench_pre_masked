
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pstore {scalar_t__ exceptions_per_area; scalar_t__ area; } ;
struct disk_exception {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct disk_exception *FUNC_1(struct pstore *VAR_0, uint32_t VAR_1)
{
 FUNC_0(VAR_1 >= VAR_0->exceptions_per_area);

 return ((struct disk_exception *) VAR_0->area) + VAR_1;
}
