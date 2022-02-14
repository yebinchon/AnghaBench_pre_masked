
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct brcms_hardware {struct brcms_c_info* wlc; } ;
struct brcms_c_info {TYPE_1__* band; } ;
struct TYPE_3__ {int phyrev; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct brcms_hardware*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct brcms_hardware *VAR_4)
{
 u16 VAR_5;
 struct brcms_c_info *VAR_6 = VAR_4->wlc;


 if (FUNC_0(VAR_6->band))
  VAR_5 = VAR_2;
 else if (FUNC_1(VAR_6->band) && (FUNC_2(VAR_6->band->phyrev, 3)))
  VAR_5 = VAR_3;
 else
  VAR_5 = VAR_1;

 FUNC_3(VAR_4, VAR_0, VAR_5);
}
