
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int node_sz; } ;
struct mdesc_handle {TYPE_1__ mdesc; } ;
struct mdesc_elem {scalar_t__ tag; int name_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (TYPE_1__*) ;
 struct mdesc_elem* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

u64 FUNC_3(struct mdesc_handle *VAR_3, u64 VAR_4, const char *VAR_5)
{
 struct mdesc_elem *VAR_6, *VAR_7 = FUNC_1(&VAR_3->mdesc);
 const char *VAR_8 = FUNC_0(&VAR_3->mdesc);
 u64 VAR_9 = VAR_3->mdesc.node_sz / 16;

 if (VAR_4 == VAR_0 || VAR_4 >= VAR_9)
  return VAR_0;

 VAR_6 = VAR_7 + VAR_4;

 VAR_6++;
 for (; VAR_6->tag != VAR_1; VAR_6++) {
  if (VAR_6->tag != VAR_2)
   continue;

  if (FUNC_2(VAR_8 + VAR_6->name_offset, VAR_5))
   continue;

  return VAR_6 - VAR_7;
 }

 return VAR_0;
}
