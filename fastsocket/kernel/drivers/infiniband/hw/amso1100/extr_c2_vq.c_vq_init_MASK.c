
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_size; } ;
struct c2_dev {int * host_msg_cache; TYPE_1__ rep_vq; int vq_cache_name; scalar_t__ devnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,char*,char) ;

int FUNC_2(struct c2_dev *VAR_2)
{
 FUNC_1(VAR_2->vq_cache_name, "c2-vq:dev%c",
  (char) ('0' + VAR_2->devnum));
 VAR_2->host_msg_cache =
     FUNC_0(VAR_2->vq_cache_name, VAR_2->rep_vq.msg_size, 0,
         VAR_1, ((void*)0));
 if (VAR_2->host_msg_cache == ((void*)0)) {
  return -VAR_0;
 }
 return 0;
}
