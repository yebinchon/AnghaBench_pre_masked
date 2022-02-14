
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int db_stride; } ;



__attribute__((used)) static size_t FUNC_0(struct nvme_dev *VAR_0, unsigned VAR_1)
{
 return 4096 + ((VAR_1 + 1) << (VAR_0->db_stride + 3));
}
