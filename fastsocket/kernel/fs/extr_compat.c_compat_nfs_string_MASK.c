
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_string {int len; int data; } ;
struct compat_nfs_string {int len; int data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct nfs_string *VAR_0,
         struct compat_nfs_string *VAR_1)
{
 VAR_0->data = FUNC_0(VAR_1->data);
 VAR_0->len = VAR_1->len;
}
