
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pkt_started; int pkt_ended; int secs_w; int secs_r; int secs_rg; } ;
struct pktcdvd_device {int bio_queue_size; int write_congestion_off; int write_congestion_on; int lock; TYPE_1__ stats; } ;
struct kobject {int dummy; } ;
struct attribute {int name; } ;
typedef int ssize_t ;
struct TYPE_4__ {struct pktcdvd_device* pd; } ;


 int spin_lock (int *) ;
 int spin_unlock (int *) ;
 int sprintf (char*,char*,int) ;
 scalar_t__ strcmp (int ,char*) ;
 TYPE_2__* to_pktcdvdkobj (struct kobject*) ;

__attribute__((used)) static ssize_t kobj_pkt_show(struct kobject *kobj,
   struct attribute *attr, char *data)
{
 struct pktcdvd_device *pd = to_pktcdvdkobj(kobj)->pd;
 int n = 0;
 int v;
 if (strcmp(attr->name, "packets_started") == 0) {
  n = sprintf(data, "%lu\n", pd->stats.pkt_started);

 } else if (strcmp(attr->name, "packets_finished") == 0) {
  n = sprintf(data, "%lu\n", pd->stats.pkt_ended);

 } else if (strcmp(attr->name, "kb_written") == 0) {
  n = sprintf(data, "%lu\n", pd->stats.secs_w >> 1);

 } else if (strcmp(attr->name, "kb_read") == 0) {
  n = sprintf(data, "%lu\n", pd->stats.secs_r >> 1);

 } else if (strcmp(attr->name, "kb_read_gather") == 0) {
  n = sprintf(data, "%lu\n", pd->stats.secs_rg >> 1);

 } else if (strcmp(attr->name, "size") == 0) {
  spin_lock(&pd->lock);
  v = pd->bio_queue_size;
  spin_unlock(&pd->lock);
  n = sprintf(data, "%d\n", v);

 } else if (strcmp(attr->name, "congestion_off") == 0) {
  spin_lock(&pd->lock);
  v = pd->write_congestion_off;
  spin_unlock(&pd->lock);
  n = sprintf(data, "%d\n", v);

 } else if (strcmp(attr->name, "congestion_on") == 0) {
  spin_lock(&pd->lock);
  v = pd->write_congestion_on;
  spin_unlock(&pd->lock);
  n = sprintf(data, "%d\n", v);
 }
 return n;
}
