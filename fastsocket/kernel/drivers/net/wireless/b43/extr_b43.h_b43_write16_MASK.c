
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int (* write16 ) (TYPE_1__*,int ,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct b43_wldev *VAR_0, u16 VAR_1, u16 VAR_2)
{
 VAR_0->dev->write16(VAR_0->dev, VAR_1, VAR_2);
}
