
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; int num_flush_requests; int num_discard_requests; struct delay_c* private; int table; } ;
struct delay_c {unsigned long long start_read; unsigned long long read_delay; unsigned long long start_write; unsigned long long write_delay; int * dev_read; int * dev_write; int may_delay; int timer_lock; int delayed_bios; int flush_expired_bios; int delay_timer; int delayed_pool; scalar_t__ writes; scalar_t__ reads; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct dm_target*,char*,int ,int **) ;
 int FUNC_5 (struct dm_target*,int *) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct delay_c*) ;
 struct delay_c* FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,unsigned long) ;
 int FUNC_12 (char*,char*,unsigned long long*,char*) ;

__attribute__((used)) static int FUNC_13(struct dm_target *VAR_6, unsigned int VAR_7, char **VAR_8)
{
 struct delay_c *VAR_9;
 unsigned long long VAR_10;
 char VAR_11;

 if (VAR_7 != 3 && VAR_7 != 6) {
  VAR_6->error = "requires exactly 3 or 6 arguments";
  return -VAR_0;
 }

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_6->error = "Cannot allocate context";
  return -VAR_1;
 }

 VAR_9->reads = VAR_9->writes = 0;

 if (FUNC_12(VAR_8[1], "%llu%c", &VAR_10, &VAR_11) != 1) {
  VAR_6->error = "Invalid device sector";
  goto bad;
 }
 VAR_9->start_read = VAR_10;

 if (FUNC_12(VAR_8[2], "%u%c", &VAR_9->read_delay, &VAR_11) != 1) {
  VAR_6->error = "Invalid delay";
  goto bad;
 }

 if (FUNC_4(VAR_6, VAR_8[0], FUNC_6(VAR_6->table),
     &VAR_9->dev_read)) {
  VAR_6->error = "Device lookup failed";
  goto bad;
 }

 VAR_9->dev_write = ((void*)0);
 if (VAR_7 == 3)
  goto out;

 if (FUNC_12(VAR_8[4], "%llu%c", &VAR_10, &VAR_11) != 1) {
  VAR_6->error = "Invalid write device sector";
  goto bad_dev_read;
 }
 VAR_9->start_write = VAR_10;

 if (FUNC_12(VAR_8[5], "%u%c", &VAR_9->write_delay, &VAR_11) != 1) {
  VAR_6->error = "Invalid write delay";
  goto bad_dev_read;
 }

 if (FUNC_4(VAR_6, VAR_8[3], FUNC_6(VAR_6->table),
     &VAR_9->dev_write)) {
  VAR_6->error = "Write device lookup failed";
  goto bad_dev_read;
 }

out:
 VAR_9->delayed_pool = FUNC_9(128, VAR_3);
 if (!VAR_9->delayed_pool) {
  FUNC_0("Couldn't create delayed bio pool.");
  goto bad_dev_write;
 }

 FUNC_11(&VAR_9->delay_timer, VAR_5, (unsigned long)VAR_9);

 FUNC_2(&VAR_9->flush_expired_bios, VAR_4);
 FUNC_1(&VAR_9->delayed_bios);
 FUNC_10(&VAR_9->timer_lock);
 FUNC_3(&VAR_9->may_delay, 1);

 VAR_6->num_flush_requests = 1;
 VAR_6->num_discard_requests = 1;
 VAR_6->private = VAR_9;
 return 0;

bad_dev_write:
 if (VAR_9->dev_write)
  FUNC_5(VAR_6, VAR_9->dev_write);
bad_dev_read:
 FUNC_5(VAR_6, VAR_9->dev_read);
bad:
 FUNC_7(VAR_9);
 return -VAR_0;
}
