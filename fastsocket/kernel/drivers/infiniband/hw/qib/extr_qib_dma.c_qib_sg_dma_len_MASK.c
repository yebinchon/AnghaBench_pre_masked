
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; } ;
struct ib_device {int dummy; } ;



__attribute__((used)) static unsigned int FUNC_0(struct ib_device *VAR_0,
       struct scatterlist *VAR_1)
{
 return VAR_1->length;
}
