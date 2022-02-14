
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ flags; scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct TYPE_5__ {scalar_t__ scan_timestamp; int dev; } ;
typedef TYPE_2__ local_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_1(local_info_t *VAR_1)
{
 union iwreq_data VAR_2;



 VAR_2.data.length = 0;
 VAR_2.data.flags = 0;
 FUNC_0(VAR_1->dev, VAR_0, &VAR_2, ((void*)0));



 VAR_1->scan_timestamp = 0;
}
