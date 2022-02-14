
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct firmware_map_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char const*,struct firmware_map_entry*) ;
 struct firmware_map_entry* FUNC_1 (int,int ) ;

int FUNC_2(u64 VAR_2, u64 VAR_3, const char *VAR_4)
{
 struct firmware_map_entry *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct firmware_map_entry), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
