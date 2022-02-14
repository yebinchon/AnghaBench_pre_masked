
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int expect_close; scalar_t__ next_heartbeat; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (char,char const*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_1(struct file *VAR_6, const char *VAR_7, size_t VAR_8,
        loff_t *VAR_9)
{
 if (!VAR_8)
  return 0;


 if (!VAR_5) {
  size_t VAR_10;

  VAR_2.expect_close = 0;

  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
   char VAR_11;
   if (FUNC_0(VAR_11, VAR_7 + VAR_10))
    return -VAR_0;
   if (VAR_11 == 'V') {
    VAR_2.expect_close = 42;
    break;
   }
  }
 }

 VAR_2.next_heartbeat = VAR_4 + VAR_3 * VAR_1;

 return VAR_8;
}
