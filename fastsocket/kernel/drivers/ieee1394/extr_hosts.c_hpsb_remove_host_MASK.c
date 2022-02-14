
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int is_shutdown; int device; int host_dev; int * driver; int delayed_reset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (struct hpsb_host*) ;

void FUNC_4(struct hpsb_host *VAR_1)
{
 VAR_1->is_shutdown = 1;

 FUNC_0(&VAR_1->delayed_reset);
 FUNC_2();

 VAR_1->driver = &VAR_0;
 FUNC_3(VAR_1);

 FUNC_1(&VAR_1->host_dev);
 FUNC_1(&VAR_1->device);
}
