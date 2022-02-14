
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_balloon {scalar_t__ need_stats_update; int config_change; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (struct virtio_balloon*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct virtio_balloon*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct virtio_balloon*) ;
 int FUNC_6 (struct virtio_balloon*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct virtio_balloon*) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(void *VAR_1)
{
 struct virtio_balloon *VAR_2 = VAR_1;

 FUNC_4();
 while (!FUNC_2()) {
  s64 VAR_3;

  FUNC_7();
  FUNC_9(VAR_2->config_change,
      (VAR_3 = FUNC_6(VAR_2)) != 0
      || VAR_2->need_stats_update
      || FUNC_2()
      || FUNC_1(VAR_0));
  if (VAR_2->need_stats_update)
   FUNC_5(VAR_2);
  if (VAR_3 > 0)
   FUNC_0(VAR_2, VAR_3);
  else if (VAR_3 < 0)
   FUNC_3(VAR_2, -VAR_3);
  FUNC_8(VAR_2);
 }
 return 0;
}
