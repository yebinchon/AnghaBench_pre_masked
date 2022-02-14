
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ actual; scalar_t__ length; } ;
struct omap_req {TYPE_1__ req; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_4(u8 *VAR_1, struct omap_req *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;
 u16 *VAR_5;

 VAR_4 = FUNC_1(VAR_2->req.length - VAR_2->req.actual, VAR_3);
 VAR_2->req.actual += VAR_4;

 VAR_3 = VAR_4;
 if (FUNC_0((((int)VAR_1) & 1) == 0)) {
  VAR_5 = (u16 *)VAR_1;
  while (VAR_3 >= 2) {
   FUNC_3(*VAR_5++, VAR_0);
   VAR_3 -= 2;
  }
  VAR_1 = (u8 *)VAR_5;
 }
 while (VAR_3--)
  FUNC_2(*VAR_1++, VAR_0);
 return VAR_4;
}
