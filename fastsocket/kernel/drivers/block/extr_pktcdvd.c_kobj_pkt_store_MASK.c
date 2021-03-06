
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ secs_r; scalar_t__ secs_rg; scalar_t__ secs_w; scalar_t__ pkt_ended; scalar_t__ pkt_started; } ;
struct pktcdvd_device {int write_congestion_off; int write_congestion_on; int lock; TYPE_1__ stats; } ;
struct kobject {int dummy; } ;
struct attribute {int name; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {struct pktcdvd_device* pd; } ;


 int init_write_congestion_marks (int*,int*) ;
 int spin_lock (int *) ;
 int spin_unlock (int *) ;
 int sscanf (char const*,char*,int*) ;
 scalar_t__ strcmp (int ,char*) ;
 TYPE_2__* to_pktcdvdkobj (struct kobject*) ;

__attribute__((used)) static ssize_t kobj_pkt_store(struct kobject *kobj,
   struct attribute *attr,
   const char *data, size_t len)
{
 struct pktcdvd_device *pd = to_pktcdvdkobj(kobj)->pd;
 int val;

 if (strcmp(attr->name, "reset") == 0 && len > 0) {
  pd->stats.pkt_started = 0;
  pd->stats.pkt_ended = 0;
  pd->stats.secs_w = 0;
  pd->stats.secs_rg = 0;
  pd->stats.secs_r = 0;

 } else if (strcmp(attr->name, "congestion_off") == 0
     && sscanf(data, "%d", &val) == 1) {
  spin_lock(&pd->lock);
  pd->write_congestion_off = val;
  init_write_congestion_marks(&pd->write_congestion_off,
     &pd->write_congestion_on);
  spin_unlock(&pd->lock);

 } else if (strcmp(attr->name, "congestion_on") == 0
     && sscanf(data, "%d", &val) == 1) {
  spin_lock(&pd->lock);
  pd->write_congestion_on = val;
  init_write_congestion_marks(&pd->write_congestion_off,
     &pd->write_congestion_on);
  spin_unlock(&pd->lock);
 }
 return len;
}
