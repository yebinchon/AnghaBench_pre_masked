
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {scalar_t__ ready; int uwb_dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline struct uwb_rc *FUNC_1(struct uwb_rc *VAR_0)
{
 if (VAR_0->ready == 0)
  return ((void*)0);
 FUNC_0(&VAR_0->uwb_dev);
 return VAR_0;
}
