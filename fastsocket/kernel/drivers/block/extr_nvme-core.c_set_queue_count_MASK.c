
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvme_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nvme_dev*,int ,int,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct nvme_dev *VAR_3, int VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7 = (VAR_4 - 1) | ((VAR_4 - 1) << 16);

 VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_7, 0,
        &VAR_6);
 if (VAR_5)
  return VAR_5 < 0 ? -VAR_1 : -VAR_0;
 return FUNC_0(VAR_6 & 0xffff, VAR_6 >> 16) + 1;
}
