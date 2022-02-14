
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ata_ering_entry {scalar_t__ timestamp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_ering_entry *VAR_1, void *VAR_2)
{
 u64 VAR_3 = FUNC_2(VAR_0);
 u64 VAR_4 = FUNC_0();
 int *VAR_5 = VAR_2;

 if (VAR_1->timestamp < VAR_4 - FUNC_1(VAR_4, VAR_3))
  return -1;

 (*VAR_5)++;
 return 0;
}
