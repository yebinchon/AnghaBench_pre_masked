
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r592_device {int parallel_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct r592_device*,int ,int) ;
 int FUNC_2 (struct r592_device*,int ,int) ;
 int FUNC_3 (struct r592_device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct r592_device *VAR_8, bool VAR_9)
{
 if (!VAR_9) {
  FUNC_0("switching to serial mode");


  FUNC_3(VAR_8, VAR_1, VAR_3);

  FUNC_1(VAR_8, VAR_6, VAR_7);

 } else {
  FUNC_0("switching to parallel mode");


  FUNC_2(VAR_8, VAR_6, VAR_7);

  FUNC_1(VAR_8, VAR_0,
   VAR_4 | VAR_5);


  FUNC_3(VAR_8, VAR_1, VAR_2);
 }

 VAR_8->parallel_mode = VAR_9;
 return 0;
}
