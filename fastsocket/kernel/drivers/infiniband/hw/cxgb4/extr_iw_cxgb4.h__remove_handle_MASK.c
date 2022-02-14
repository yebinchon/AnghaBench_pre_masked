
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idr {int dummy; } ;
struct c4iw_dev {int lock; } ;


 int FUNC_0 (struct idr*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct c4iw_dev *VAR_0, struct idr *VAR_1,
       u32 VAR_2, int VAR_3)
{
 if (VAR_3)
  FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_2(&VAR_0->lock);
}
