
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zd_chip {int usb; int mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static inline int FUNC_3(struct zd_chip *VAR_0, u32 VAR_1, u8 VAR_2)
{
 FUNC_0(FUNC_1(&VAR_0->mutex));
 return FUNC_2(&VAR_0->usb, VAR_1, VAR_2);
}
