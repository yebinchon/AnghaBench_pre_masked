
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_node {int dummy; } ;
struct drm_open_hash {int dummy; } ;


 int VAR_0 ;
 struct hlist_node* FUNC_0 (struct drm_open_hash*,unsigned long) ;
 int FUNC_1 (struct hlist_node*) ;

int FUNC_2(struct drm_open_hash *VAR_1, unsigned long VAR_2)
{
 struct hlist_node *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_3);
  return 0;
 }
 return -VAR_0;
}
