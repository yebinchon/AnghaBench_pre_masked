
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; struct smd_tty_info* driver_data; } ;
struct smd_tty_info {scalar_t__ ch; struct tty_struct* tty; int open_count; int wake_lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char const*,scalar_t__*,struct smd_tty_info*,int ) ;
 struct smd_tty_info* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,char const*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_5, struct file *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = VAR_5->index;
 struct smd_tty_info *VAR_9;
 const char *VAR_10;

 if (VAR_8 == 0) {
  VAR_10 = "SMD_DS";
 } else if (VAR_8 == 27) {
  VAR_10 = "SMD_GPSNMEA";
 } else {
  return -VAR_0;
 }

 VAR_9 = VAR_2 + VAR_8;

 FUNC_0(&VAR_3);
 FUNC_4(&VAR_9->wake_lock, VAR_1, VAR_10);
 VAR_5->driver_data = VAR_9;

 if (VAR_9->open_count++ == 0) {
  VAR_9->tty = VAR_5;
  if (VAR_9->ch) {
   FUNC_2(VAR_9->ch);
  } else {
   VAR_7 = FUNC_3(VAR_10, &VAR_9->ch, VAR_9, VAR_4);
  }
 }
 FUNC_1(&VAR_3);

 return VAR_7;
}
