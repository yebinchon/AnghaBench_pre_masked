
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_querymenu {size_t index; int name; scalar_t__ reserved; int id; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (int ,char const* const,int) ;
 char** FUNC_1 (int ) ;

int FUNC_2(struct v4l2_querymenu *VAR_2, const u32 *VAR_3)
{
 const char * const *VAR_4 = FUNC_1(VAR_2->id);

 VAR_2->reserved = 0;
 if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
  return -VAR_0;
 while (*VAR_3 != VAR_1) {
  if (*VAR_3++ == VAR_2->index) {
   FUNC_0(VAR_2->name, VAR_4[VAR_2->index],
     sizeof(VAR_2->name));
   return 0;
  }
 }
 return -VAR_0;
}
