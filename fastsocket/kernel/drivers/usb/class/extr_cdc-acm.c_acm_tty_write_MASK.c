
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct acm_wb {int len; int buf; } ;
struct acm {int writesize; int write_lock; struct acm_wb* wb; } ;


 int FUNC_0 (struct acm*) ;
 int VAR_0 ;
 int FUNC_1 (struct acm*) ;
 int FUNC_2 (struct acm*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,unsigned char const*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_1,
     const unsigned char *VAR_2, int VAR_3)
{
 struct acm *VAR_4 = VAR_1->driver_data;
 int VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 struct acm_wb *VAR_8;

 FUNC_3("Entering acm_tty_write to write %d bytes,", VAR_3);

 if (!FUNC_0(VAR_4))
  return -VAR_0;
 if (!VAR_3)
  return 0;

 FUNC_5(&VAR_4->write_lock, VAR_6);
 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 < 0) {
  FUNC_6(&VAR_4->write_lock, VAR_6);
  return 0;
 }
 VAR_8 = &VAR_4->wb[VAR_7];

 VAR_3 = (VAR_3 > VAR_4->writesize) ? VAR_4->writesize : VAR_3;
 FUNC_3("Get %d bytes...", VAR_3);
 FUNC_4(VAR_8->buf, VAR_2, VAR_3);
 VAR_8->len = VAR_3;
 FUNC_6(&VAR_4->write_lock, VAR_6);

 VAR_5 = FUNC_2(VAR_4, VAR_7);
 if (VAR_5 < 0)
  return VAR_5;
 return VAR_3;
}
