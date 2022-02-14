
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_dev {TYPE_2__* ops; } ;
typedef int __le32 ;
struct TYPE_4__ {TYPE_1__* bcn; } ;
struct TYPE_3__ {int winfo_size; } ;


 int FUNC_0 (struct rt2x00_dev*,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct rt2x00_dev *VAR_0,
      unsigned int VAR_1)
{
 int VAR_2;
 const int VAR_3 = VAR_0->ops->bcn->winfo_size;






 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2 += sizeof(__le32))
  FUNC_0(VAR_0, VAR_1 + VAR_2, 0);
}
