
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t ring_tail; TYPE_1__* ring; } ;
struct ar9170 {TYPE_2__ debug; } ;
typedef int ssize_t ;
struct TYPE_3__ {unsigned int reg; unsigned int value; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ar9170*,unsigned int,unsigned int*) ;
 int FUNC_1 (char const*,char*,unsigned int*,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct ar9170 *VAR_5,
 const char *VAR_6, size_t VAR_7)
{
 int VAR_8 = 0, VAR_9, VAR_10 = 0, VAR_11 = 32, VAR_12;
 unsigned int VAR_13, VAR_14;

 if (!VAR_7)
  return 0;

 if (VAR_7 > VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_1(VAR_6, "0x%X %d", &VAR_13, &VAR_10);
 if (VAR_12 < 1) {
  VAR_8 = -VAR_3;
  goto out;
 }

 if (VAR_12 == 1)
  VAR_10 = 1;

 if (VAR_10 > 15) {
  VAR_8 = -VAR_4;
  goto out;
 }

 if ((VAR_13 >= 0x280000) || ((VAR_13 + (VAR_10 << 2)) >= 0x280000)) {
  VAR_8 = -VAR_2;
  goto out;
 }

 if (VAR_13 & 3) {
  VAR_8 = -VAR_3;
  goto out;
 }

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_8 = FUNC_0(VAR_5, VAR_13 + (VAR_9 << 2), &VAR_14);
  if (VAR_8)
   goto out;

  VAR_5->debug.ring[VAR_5->debug.ring_tail].reg = VAR_13 + (VAR_9 << 2);
  VAR_5->debug.ring[VAR_5->debug.ring_tail].value = VAR_14;
  VAR_5->debug.ring_tail++;
  VAR_5->debug.ring_tail %= VAR_0;
 }

out:
 return VAR_8 ? VAR_8 : VAR_7;
}
