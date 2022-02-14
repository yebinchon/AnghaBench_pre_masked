
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pstore {int dummy; } ;
struct disk_exception {scalar_t__ new_chunk; scalar_t__ old_chunk; } ;


 struct disk_exception* FUNC_0 (struct pstore*,int ) ;

__attribute__((used)) static void FUNC_1(struct pstore *VAR_0, uint32_t VAR_1)
{
 struct disk_exception *VAR_2 = FUNC_0(VAR_0, VAR_1);


 VAR_2->old_chunk = 0;
 VAR_2->new_chunk = 0;
}
