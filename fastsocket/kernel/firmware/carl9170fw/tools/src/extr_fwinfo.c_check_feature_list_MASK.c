
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feature_list {int id; char* name; int (* func ) (struct carl9170fw_desc_head const*,struct carlfw*) ;} ;
struct carlfw {int dummy; } ;
struct carl9170fw_desc_head {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int ,char*,int,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct carl9170fw_desc_head const*,struct carlfw*) ;

__attribute__((used)) static void FUNC_3(const struct carl9170fw_desc_head *VAR_1,
          const __le32 VAR_2,
          const struct feature_list *VAR_3,
          const unsigned int VAR_4,
          struct carlfw *VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (!FUNC_0(VAR_2, VAR_3[VAR_6].id))
   continue;

  FUNC_1(VAR_0, "\t\t%2d = %s\n", VAR_3[VAR_6].id, VAR_3[VAR_6].name);
  if (VAR_3[VAR_6].func)
   VAR_3[VAR_6].func(VAR_1, VAR_5);
 }
}
