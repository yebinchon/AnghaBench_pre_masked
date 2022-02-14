
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_view {int dummy; } ;
struct debug_info {int dummy; } ;
typedef struct debug_info debug_info_t ;


 int VAR_0 ;
 struct debug_view VAR_1 ;
 struct debug_info* FUNC_0 (char const*,int ,int,int) ;
 int FUNC_1 (struct debug_info*,struct debug_view*) ;
 int FUNC_2 (struct debug_info*,int) ;

__attribute__((used)) static debug_info_t *FUNC_3(const char *VAR_2, int VAR_3,
      struct debug_view *VAR_4, int VAR_5)
{
 struct debug_info *VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_3, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 FUNC_1(VAR_6, &VAR_1);
 FUNC_1(VAR_6, VAR_4);
 FUNC_2(VAR_6, VAR_3);

 return VAR_6;
}
