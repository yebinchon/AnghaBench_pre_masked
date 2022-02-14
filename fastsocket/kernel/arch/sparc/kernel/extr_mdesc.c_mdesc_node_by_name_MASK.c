
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_5__ {int node_sz; } ;
struct mdesc_handle {TYPE_2__ mdesc; } ;
struct TYPE_4__ {size_t val; } ;
struct mdesc_elem {scalar_t__ tag; int name_offset; TYPE_1__ d; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (TYPE_2__*) ;
 struct mdesc_elem* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char const*,char const*) ;

u64 FUNC_3(struct mdesc_handle *VAR_2,
         u64 VAR_3, const char *VAR_4)
{
 struct mdesc_elem *VAR_5 = FUNC_1(&VAR_2->mdesc);
 const char *VAR_6 = FUNC_0(&VAR_2->mdesc);
 u64 VAR_7 = VAR_2->mdesc.node_sz / 16;
 u64 VAR_8;

 if (VAR_3 == VAR_0) {
  VAR_8 = VAR_3 = 0;
 } else if (VAR_3 >= VAR_7) {
  return VAR_0;
 } else {
  VAR_8 = VAR_5[VAR_3].d.val;
 }

 while (VAR_8 < VAR_7) {
  if (VAR_5[VAR_8].tag != VAR_1)
   return VAR_0;
  if (!FUNC_2(VAR_6 + VAR_5[VAR_8].name_offset, VAR_4))
   break;
  VAR_8 = VAR_5[VAR_8].d.val;
 }
 if (VAR_8 >= VAR_7)
  VAR_8 = VAR_0;
 return VAR_8;
}
