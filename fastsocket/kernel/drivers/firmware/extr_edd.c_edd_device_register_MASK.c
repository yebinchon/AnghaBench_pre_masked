
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kset; } ;
struct edd_device {TYPE_1__ kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct edd_device*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct edd_device*) ;
 int FUNC_2 (TYPE_1__*,int *,int *,char*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_4(struct edd_device *VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_3)
  return 1;
 FUNC_0(VAR_3, VAR_4);
 VAR_3->kobj.kset = VAR_1;
 VAR_5 = FUNC_2(&VAR_3->kobj, &VAR_2, ((void*)0),
         "int13_dev%02x", 0x80 + VAR_4);
 if (!VAR_5) {
  FUNC_1(VAR_3);
  FUNC_3(&VAR_3->kobj, VAR_0);
 }
 return VAR_5;
}
