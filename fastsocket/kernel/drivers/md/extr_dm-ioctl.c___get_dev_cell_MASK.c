
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mapped_device {int dummy; } ;
struct hash_cell {int dummy; } ;


 struct mapped_device* FUNC_0 (int ) ;
 struct hash_cell* FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct hash_cell *FUNC_4(uint64_t VAR_0)
{
 struct mapped_device *VAR_1;
 struct hash_cell *VAR_2;

 VAR_1 = FUNC_0(FUNC_3(VAR_0));
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2) {
  FUNC_2(VAR_1);
  return ((void*)0);
 }

 return VAR_2;
}
