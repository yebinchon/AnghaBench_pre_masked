
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fschmd_data {int watchdog_control; size_t kind; int watchdog_lock; int client; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fschmd_data *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(&VAR_4->watchdog_lock);
 if (!VAR_4->client) {
  VAR_5 = -VAR_0;
  goto leave;
 }

 VAR_4->watchdog_control &= ~VAR_2;


 FUNC_0(VAR_4->client,
  VAR_1[VAR_4->kind],
  VAR_4->watchdog_control | VAR_3);
leave:
 FUNC_2(&VAR_4->watchdog_lock);
 return VAR_5;
}
