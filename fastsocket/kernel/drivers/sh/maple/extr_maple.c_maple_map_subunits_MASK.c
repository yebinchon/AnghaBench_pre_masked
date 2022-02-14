
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device_specify {int unit; int port; } ;
struct maple_device {int busy; int port; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,struct maple_device_specify*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct maple_device*,int ,int ,int ,int *) ;
 struct maple_device* FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct maple_device *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct maple_device *VAR_9;
 struct maple_device_specify VAR_10;

 VAR_10.port = VAR_4->port;
 for (VAR_7 = 0; VAR_7 < 5; VAR_7++) {
  VAR_10.unit = VAR_7 + 1;
  VAR_6 =
      FUNC_1(&VAR_2, ((void*)0), &VAR_10,
         VAR_1);
  if (VAR_6) {
   VAR_5 = VAR_5 >> 1;
   continue;
  }
  VAR_8 = VAR_5 & 0x01;
  if (VAR_8) {
   VAR_9 = FUNC_3(VAR_4->port, VAR_7 + 1);
   if (!VAR_9)
    return;
   FUNC_0(&VAR_9->busy, 1);
   FUNC_2(VAR_9, 0, VAR_0,
    0, ((void*)0));

   VAR_3 = 1;
  }
  VAR_5 = VAR_5 >> 1;
 }
}
