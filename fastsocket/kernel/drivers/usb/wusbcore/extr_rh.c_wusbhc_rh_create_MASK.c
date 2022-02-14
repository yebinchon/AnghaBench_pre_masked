
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int ports_max; int * port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct wusbhc *VAR_2)
{
 int VAR_3 = -VAR_0;
 size_t VAR_4, VAR_5;
 VAR_4 = VAR_2->ports_max * sizeof(VAR_2->port[0]);
 VAR_2->port = FUNC_0(VAR_4, VAR_1);
 if (VAR_2->port == ((void*)0))
  goto error_port_alloc;
 for (VAR_5 = 0; VAR_5 < VAR_2->ports_max; VAR_5++)
  FUNC_1(&VAR_2->port[VAR_5]);
 VAR_3 = 0;
error_port_alloc:
 return VAR_3;
}
