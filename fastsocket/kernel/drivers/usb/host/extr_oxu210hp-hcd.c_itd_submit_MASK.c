
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct oxu_hcd {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct oxu_hcd*,char*) ;

__attribute__((used)) static inline int FUNC_1(struct oxu_hcd *VAR_1, struct urb *VAR_2,
      gfp_t VAR_3)
{
 FUNC_0(VAR_1, "iso support is missing!\n");
 return -VAR_0;
}
