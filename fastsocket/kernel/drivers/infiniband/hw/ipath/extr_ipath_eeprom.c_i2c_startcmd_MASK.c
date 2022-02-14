
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ipath_devdata*,int ) ;
 int FUNC_2 (struct ipath_devdata*,int ) ;
 int FUNC_3 (struct ipath_devdata*,int ) ;

__attribute__((used)) static int FUNC_4(struct ipath_devdata *VAR_3, u8 VAR_4)
{
 int VAR_5;


 FUNC_2(VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_1);
 FUNC_2(VAR_3, VAR_2);
 FUNC_1(VAR_3, VAR_2);


 VAR_5 = FUNC_3(VAR_3, VAR_4);

 if (VAR_5)
  FUNC_0(VAR_0, "No ack to complete start\n");

 return VAR_5;
}
