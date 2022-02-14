
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; } ;
struct bsg_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct bsg_device *VAR_2, struct file *VAR_3)
{
 if (VAR_3->f_flags & VAR_1)
  FUNC_0(VAR_0, &VAR_2->flags);
 else
  FUNC_1(VAR_0, &VAR_2->flags);
}
