
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_4__ {scalar_t__ i2eValid; int i2eData; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_2(i2eBordStrPtr VAR_3, unsigned char *VAR_4, int VAR_5)
{

 if (VAR_3->i2eValid != VAR_2)
  FUNC_0(VAR_3, VAR_1);

 FUNC_1(VAR_3->i2eData, VAR_4, VAR_5);

 FUNC_0(VAR_3, VAR_0);
}
