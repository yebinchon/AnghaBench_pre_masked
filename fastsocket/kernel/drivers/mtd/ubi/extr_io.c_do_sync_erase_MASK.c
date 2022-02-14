
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct ubi_device {int peb_size; TYPE_1__* mtd; } ;
struct erase_info {int addr; int len; unsigned long priv; scalar_t__ state; int callback; TYPE_1__* mtd; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* erase ) (TYPE_1__*,struct erase_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct erase_info*,int ,int) ;
 int FUNC_4 (TYPE_1__*,struct erase_info*) ;
 int FUNC_5 (struct ubi_device*,int,int ,int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct ubi_device *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0;
 struct erase_info VAR_11;
 wait_queue_head_t VAR_12;

 FUNC_1("erase PEB %d", VAR_8);

retry:
 FUNC_2(&VAR_12);
 FUNC_3(&VAR_11, 0, sizeof(struct erase_info));

 VAR_11.mtd = VAR_7->mtd;
 VAR_11.addr = (loff_t)VAR_8 * VAR_7->peb_size;
 VAR_11.len = VAR_7->peb_size;
 VAR_11.callback = VAR_6;
 VAR_11.priv = (unsigned long)&VAR_12;

 VAR_9 = VAR_7->mtd->erase(VAR_7->mtd, &VAR_11);
 if (VAR_9) {
  if (VAR_10++ < VAR_5) {
   FUNC_1("error %d while erasing PEB %d, retry",
          VAR_9, VAR_8);
   FUNC_10();
   goto retry;
  }
  FUNC_8("cannot erase PEB %d, error %d", VAR_8, VAR_9);
  FUNC_6();
  return VAR_9;
 }

 VAR_9 = FUNC_9(VAR_12, VAR_11.state == VAR_3 ||
        VAR_11.state == VAR_4);
 if (VAR_9) {
  FUNC_8("interrupted PEB %d erasure", VAR_8);
  return -VAR_0;
 }

 if (VAR_11.state == VAR_4) {
  if (VAR_10++ < VAR_5) {
   FUNC_1("error while erasing PEB %d, retry", VAR_8);
   FUNC_10();
   goto retry;
  }
  FUNC_8("cannot erase PEB %d", VAR_8);
  FUNC_6();
  return -VAR_2;
 }

 VAR_9 = FUNC_5(VAR_7, VAR_8, 0, VAR_7->peb_size);
 if (VAR_9)
  return VAR_9 > 0 ? -VAR_1 : VAR_9;

 if (FUNC_7() && !VAR_9) {
  FUNC_0("cannot erase PEB %d (emulated)", VAR_8);
  return -VAR_2;
 }

 return 0;
}
