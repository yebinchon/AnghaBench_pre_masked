
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libipw_network {int dummy; } ;
struct libipw_device {int * networks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct libipw_device *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3->networks[VAR_4] = FUNC_2(sizeof(struct libipw_network),
         VAR_1);
  if (!VAR_3->networks[VAR_4]) {
   FUNC_0("Out of memory allocating beacons\n");
   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    FUNC_1(VAR_3->networks[VAR_5]);
   return -VAR_0;
  }
 }

 return 0;
}
