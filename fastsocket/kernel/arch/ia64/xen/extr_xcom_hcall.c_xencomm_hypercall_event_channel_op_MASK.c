
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencomm_handle {int dummy; } ;
struct evtchn_op {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct xencomm_handle*) ;
 struct xencomm_handle* FUNC_1 (void*,int) ;

int
FUNC_2(int VAR_1, void *VAR_2)
{
 struct xencomm_handle *VAR_3;
 VAR_3 = FUNC_1(VAR_2, sizeof(struct evtchn_op));
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_3);
}
