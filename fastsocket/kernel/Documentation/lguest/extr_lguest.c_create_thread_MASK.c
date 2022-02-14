
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long pfn; } ;
struct virtqueue {unsigned long eventfd; scalar_t__ thread; TYPE_1__ config; } ;
typedef scalar_t__ pid_t ;
typedef int args ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,int,struct virtqueue*) ;
 int FUNC_1 (unsigned long) ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 unsigned long FUNC_3 (int ,int ) ;
 unsigned long FUNC_4 () ;
 int VAR_4 ;
 char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,unsigned long**,int) ;

__attribute__((used)) static void FUNC_7(struct virtqueue *VAR_5)
{




 char *VAR_6 = FUNC_5(32768);
 unsigned long VAR_7[] = { VAR_1,
     VAR_5->config.pfn*FUNC_4(), 0 };


 VAR_5->eventfd = FUNC_3(0, 0);
 if (VAR_5->eventfd < 0)
  FUNC_2(1, "Creating eventfd");
 VAR_7[2] = VAR_5->eventfd;





 if (FUNC_6(VAR_4, &VAR_7, sizeof(VAR_7)) != 0)
  FUNC_2(1, "Attaching eventfd");





 VAR_5->thread = FUNC_0(VAR_3, VAR_6 + 32768, VAR_0 | VAR_2, VAR_5);
 if (VAR_5->thread == (pid_t)-1)
  FUNC_2(1, "Creating clone");


 FUNC_1(VAR_5->eventfd);
}
