
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int v4l2_cap; int pdev; int card_name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, struct v4l2_capability *VAR_4)
{
 struct ivtv *VAR_5 = ((struct ivtv_open_id *)VAR_3)->itv;

 FUNC_2(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_2(VAR_4->card, VAR_5->card_name, sizeof(VAR_4->card));
 FUNC_1(VAR_4->bus_info, sizeof(VAR_4->bus_info), "PCI:%s", FUNC_0(VAR_5->pdev));
 VAR_4->version = VAR_1;
 VAR_4->capabilities = VAR_5->v4l2_cap;
 return 0;
}
