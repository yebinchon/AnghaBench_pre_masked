
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iTCO_version; int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(int *VAR_5)
{
 unsigned int VAR_6;
 unsigned char VAR_7;


 if (VAR_4.iTCO_version == 2) {
  FUNC_2(&VAR_4.io_lock);
  VAR_6 = FUNC_1(VAR_2);
  VAR_6 &= 0x3ff;
  FUNC_3(&VAR_4.io_lock);

  *VAR_5 = (VAR_6 * 6) / 10;
 } else if (VAR_4.iTCO_version == 1) {
  FUNC_2(&VAR_4.io_lock);
  VAR_7 = FUNC_0(VAR_2);
  VAR_7 &= 0x3f;
  if (!(FUNC_1(VAR_1) & 0x0008))
   VAR_7 += (FUNC_0(VAR_3) & 0x3f);
  FUNC_3(&VAR_4.io_lock);

  *VAR_5 = (VAR_7 * 6) / 10;
 } else
  return -VAR_0;
 return 0;
}
