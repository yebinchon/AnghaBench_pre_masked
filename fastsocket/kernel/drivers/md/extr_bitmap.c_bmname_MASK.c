
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {scalar_t__ mddev; } ;


 char* FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline char *FUNC_1(struct bitmap *VAR_0)
{
 return VAR_0->mddev ? FUNC_0(VAR_0->mddev) : "mdX";
}
