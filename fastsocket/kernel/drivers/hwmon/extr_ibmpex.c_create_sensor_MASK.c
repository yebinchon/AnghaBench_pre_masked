
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ibmpex_bmc_data {TYPE_3__* sensors; int bmc_device; } ;
struct TYPE_5__ {char* name; int mode; } ;
struct TYPE_8__ {TYPE_1__ attr; int show; } ;
struct TYPE_7__ {TYPE_2__* attr; } ;
struct TYPE_6__ {int index; int nr; TYPE_4__ dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 char** VAR_6 ;
 int FUNC_3 (char*,char*,char*,int) ;
 char** VAR_7 ;

__attribute__((used)) static int FUNC_4(struct ibmpex_bmc_data *VAR_8, int VAR_9,
    int VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;
 char *VAR_14;

 VAR_14 = FUNC_2(32, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 if (VAR_9 == VAR_4)
  FUNC_3(VAR_14, VAR_7[VAR_12], "temp", VAR_10);
 else if (VAR_9 == VAR_2)
  FUNC_3(VAR_14, VAR_6[VAR_12], "power", VAR_10);

 VAR_8->sensors[VAR_11].attr[VAR_12].dev_attr.attr.name = VAR_14;
 VAR_8->sensors[VAR_11].attr[VAR_12].dev_attr.attr.mode = VAR_3;
 VAR_8->sensors[VAR_11].attr[VAR_12].dev_attr.show = VAR_5;
 VAR_8->sensors[VAR_11].attr[VAR_12].index = VAR_11;
 VAR_8->sensors[VAR_11].attr[VAR_12].nr = VAR_12;

 VAR_13 = FUNC_0(VAR_8->bmc_device,
     &VAR_8->sensors[VAR_11].attr[VAR_12].dev_attr);
 if (VAR_13) {
  VAR_8->sensors[VAR_11].attr[VAR_12].dev_attr.attr.name = ((void*)0);
  FUNC_1(VAR_14);
  return VAR_13;
 }

 return 0;
}
