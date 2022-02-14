
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl_entry {scalar_t__ e_tag; scalar_t__ e_id; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct posix_acl_entry *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 if (VAR_2->e_tag != VAR_3->e_tag)
  return VAR_2->e_tag - VAR_3->e_tag;
 else if (VAR_2->e_id > VAR_3->e_id)
  return 1;
 else if (VAR_2->e_id < VAR_3->e_id)
  return -1;
 else
  return 0;
}
