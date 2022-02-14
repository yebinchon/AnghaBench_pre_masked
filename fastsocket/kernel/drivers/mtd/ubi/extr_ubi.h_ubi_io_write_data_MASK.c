
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {scalar_t__ leb_start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ubi_device*,void const*,int,scalar_t__,int) ;

__attribute__((used)) static inline int FUNC_2(struct ubi_device *VAR_0, const void *VAR_1,
        int VAR_2, int VAR_3, int VAR_4)
{
 FUNC_0(VAR_3 >= 0);
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3 + VAR_0->leb_start, VAR_4);
}
