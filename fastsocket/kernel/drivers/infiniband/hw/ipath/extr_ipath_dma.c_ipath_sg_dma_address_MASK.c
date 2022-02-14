
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct scatterlist {scalar_t__ offset; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static u64 FUNC_2(struct ib_device *VAR_0, struct scatterlist *VAR_1)
{
 u64 VAR_2 = (u64) FUNC_0(FUNC_1(VAR_1));

 if (VAR_2)
  VAR_2 += VAR_1->offset;
 return VAR_2;
}
