
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extended_attribute {int namelen; } ;
typedef int secno ;



__attribute__((used)) static inline secno FUNC_0(struct extended_attribute *VAR_0)
{
 return *(secno *)((char *)VAR_0 + 5 + VAR_0->namelen);
}
