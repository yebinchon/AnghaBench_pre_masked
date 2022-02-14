
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_dev {int acked_features; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct vhost_dev *VAR_0, int VAR_1)
{
 unsigned VAR_2 = FUNC_0(VAR_0->acked_features);
 return VAR_2 & (1 << VAR_1);
}
