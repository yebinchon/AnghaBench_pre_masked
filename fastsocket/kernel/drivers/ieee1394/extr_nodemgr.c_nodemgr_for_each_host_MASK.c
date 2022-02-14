
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_host_parameter {int (* cb ) (struct hpsb_host*,void*) ;void* data; } ;


 int FUNC_0 (int *,int *,struct per_host_parameter*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(void *VAR_2, int (*VAR_3)(struct hpsb_host *, void *))
{
 struct per_host_parameter VAR_4;

 VAR_4.cb = VAR_3;
 VAR_4.data = VAR_2;
 return FUNC_0(&VAR_0, ((void*)0), &VAR_4, VAR_1);
}
