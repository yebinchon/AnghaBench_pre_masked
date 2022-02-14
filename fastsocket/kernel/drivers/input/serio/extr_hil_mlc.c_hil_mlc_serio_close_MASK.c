
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int * drv; struct hil_mlc_serio_map* port_data; } ;
struct hil_mlc_serio_map {struct hil_mlc* mlc; } ;
struct hil_mlc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct serio*,int *) ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_0)
{
 struct hil_mlc_serio_map *VAR_1;
 struct hil_mlc *VAR_2;

 VAR_1 = VAR_0->port_data;
 FUNC_0(VAR_1 == ((void*)0));

 VAR_2 = VAR_1->mlc;
 FUNC_0(VAR_2 == ((void*)0));

 FUNC_1(VAR_0, ((void*)0));
 VAR_0->drv = ((void*)0);

}
