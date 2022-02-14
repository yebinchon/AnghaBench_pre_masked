
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencomm_mini {int dummy; } ;
struct xencomm_handle {int dummy; } ;
struct xencomm_desc {int dummy; } ;


 struct xencomm_handle* FUNC_0 (void*) ;
 int FUNC_1 (void*,unsigned long,struct xencomm_mini*,struct xencomm_desc**) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 struct xencomm_handle* FUNC_3 (struct xencomm_desc*) ;

struct xencomm_handle *FUNC_4(void *VAR_0, unsigned long VAR_1,
   struct xencomm_mini *VAR_2)
{
 int VAR_3;
 struct xencomm_desc *VAR_4 = ((void*)0);

 if (FUNC_2((unsigned long)VAR_0))
  return FUNC_0(VAR_0);

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2,
    &VAR_4);

 if (VAR_3)
  return ((void*)0);

 return FUNC_3(VAR_4);
}
