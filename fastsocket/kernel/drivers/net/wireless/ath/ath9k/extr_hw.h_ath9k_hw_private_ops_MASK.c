
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_private_ops {int dummy; } ;
struct ath_hw {struct ath_hw_private_ops private_ops; } ;



__attribute__((used)) static inline struct ath_hw_private_ops *FUNC_0(struct ath_hw *VAR_0)
{
 return &VAR_0->private_ops;
}
