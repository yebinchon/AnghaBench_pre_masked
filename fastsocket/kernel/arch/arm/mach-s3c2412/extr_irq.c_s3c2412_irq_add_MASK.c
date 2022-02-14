
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sys_device {int dummy; } ;
struct TYPE_6__ {int set_wake; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned int,TYPE_1__*) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct sys_device *VAR_15)
{
 unsigned int VAR_16;

 for (VAR_16 = VAR_1; VAR_16 <= VAR_2; VAR_16++) {
  FUNC_1(VAR_16, &VAR_11);
  FUNC_3(VAR_16, VAR_7);
  FUNC_2(VAR_16, VAR_0);
 }



 FUNC_0(VAR_5, VAR_10);

 for (VAR_16 = VAR_6; VAR_16 <= VAR_4; VAR_16++) {
  FUNC_1(VAR_16, &VAR_9);
  FUNC_3(VAR_16, VAR_8);
  FUNC_2(VAR_16, VAR_0);
 }



 VAR_12 = VAR_14;
 VAR_12.set_wake = VAR_13;

 FUNC_1(VAR_3, &VAR_12);

 return 0;
}
