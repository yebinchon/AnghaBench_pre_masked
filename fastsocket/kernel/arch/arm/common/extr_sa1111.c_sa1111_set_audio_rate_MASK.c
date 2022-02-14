
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111_dev {scalar_t__ devid; } ;
struct sa1111 {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sa1111*) ;
 struct sa1111* FUNC_1 (struct sa1111_dev*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

int FUNC_3(struct sa1111_dev *VAR_3, int VAR_4)
{
 struct sa1111 *VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6;

 if (VAR_3->devid != VAR_1)
  return -VAR_0;

 VAR_6 = (FUNC_0(VAR_5) / 256 + VAR_4 / 2) / VAR_4;
 if (VAR_6 == 0)
  VAR_6 = 1;
 if (VAR_6 > 128)
  VAR_6 = 128;

 FUNC_2(VAR_6 - 1, VAR_5->base + VAR_2);

 return 0;
}
