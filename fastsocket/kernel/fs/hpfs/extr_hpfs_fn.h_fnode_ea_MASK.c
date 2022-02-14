
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnode {int ea_offs; int acl_size_s; } ;
struct extended_attribute {int dummy; } ;



__attribute__((used)) static inline struct extended_attribute *FUNC_0(struct fnode *VAR_0)
{
 return (struct extended_attribute *)((char *)VAR_0 + VAR_0->ea_offs + VAR_0->acl_size_s);
}
