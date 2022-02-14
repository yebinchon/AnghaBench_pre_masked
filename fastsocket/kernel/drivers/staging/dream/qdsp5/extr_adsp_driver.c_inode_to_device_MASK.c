
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_rdev; } ;
struct adsp_device {scalar_t__ device; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 struct adsp_device* VAR_1 ;

__attribute__((used)) static struct adsp_device *FUNC_1(struct inode *VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_2->i_rdev);
 if (VAR_3 < VAR_0) {
  if (VAR_1[VAR_3].device)
   return VAR_1 + VAR_3;
 }
 return ((void*)0);
}
