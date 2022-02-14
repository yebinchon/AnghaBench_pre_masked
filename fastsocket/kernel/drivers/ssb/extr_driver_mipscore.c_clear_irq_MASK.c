
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_device {int dummy; } ;
struct TYPE_2__ {struct ssb_device* dev; } ;
struct ssb_bus {TYPE_1__ mipscore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct ssb_device*,int ) ;
 int FUNC_1 (struct ssb_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ssb_bus *VAR_3, unsigned int VAR_4)
{
 struct ssb_device *VAR_5 = VAR_3->mipscore.dev;


 if (VAR_4 == 0) {
  FUNC_1(VAR_5, VAR_0, 0);
 } else {
  FUNC_1(VAR_5, VAR_1,
       FUNC_0(VAR_5, VAR_1) |
       VAR_2[VAR_4]);
 }
}
