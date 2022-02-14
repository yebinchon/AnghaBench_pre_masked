
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jfs_ea {int namelen; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct jfs_ea*) ;

__attribute__((used)) static inline int FUNC_1(struct jfs_ea *VAR_1)
{
 if (FUNC_0(VAR_1))
  return VAR_1->namelen + VAR_0;
 else
  return VAR_1->namelen;
}
