
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencomm_handle {int dummy; } ;
struct xencomm_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,unsigned long,struct xencomm_desc**,int ) ;
 struct xencomm_handle* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 struct xencomm_handle* FUNC_3 (struct xencomm_desc*) ;

struct xencomm_handle *FUNC_4(void *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 struct xencomm_desc *VAR_4;

 if (FUNC_2((unsigned long)VAR_1))
  return FUNC_1(VAR_1);

 VAR_3 = FUNC_0(VAR_1, VAR_2, &VAR_4, VAR_0);

 if (VAR_3 || VAR_4 == ((void*)0))
  return ((void*)0);

 return FUNC_3(VAR_4);
}
