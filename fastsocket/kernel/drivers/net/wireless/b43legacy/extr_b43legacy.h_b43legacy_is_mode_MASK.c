
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wl {int if_type; scalar_t__ operating; } ;



__attribute__((used)) static inline
int FUNC_0(struct b43legacy_wl *VAR_0, int VAR_1)
{
 return (VAR_0->operating &&
  VAR_0->if_type == VAR_1);
}
