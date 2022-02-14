
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0);

 if (VAR_1)
  return VAR_1;

 FUNC_1("registered NETLINK GENERIC group: %d\n",
       VAR_0.id);

 return VAR_1;
}
