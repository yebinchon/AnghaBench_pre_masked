
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu_tcam_entry {int assoc_data; int valid; void** key_mask; void** key; } ;
struct niu_parent {struct niu_tcam_entry* tcam; } ;
struct niu_classifier {int tcam_top; int tcam_valid_entries; } ;
struct niu {struct niu_classifier clas; struct niu_parent* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct niu_tcam_entry*,int ,int) ;
 int FUNC_1 (struct niu*,int,int) ;
 int FUNC_2 (struct niu*,int,void**,void**) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_3)
{
 struct niu_parent *VAR_4 = VAR_3->parent;
 struct niu_classifier *VAR_5 = &VAR_3->clas;
 struct niu_tcam_entry *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = VAR_5->tcam_top;
 VAR_6 = &VAR_4->tcam[VAR_7];




 FUNC_0(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->key[1] = VAR_2;
 VAR_6->key_mask[1] = VAR_2;
 VAR_6->assoc_data = (VAR_1 |
     ((u64)0 << VAR_0));
 VAR_8 = FUNC_2(VAR_3, VAR_7, VAR_6->key, VAR_6->key_mask);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_3, VAR_7, VAR_6->assoc_data);
 if (VAR_8)
  return VAR_8;
 VAR_6->valid = 1;
 VAR_5->tcam_valid_entries++;

 return 0;
}
