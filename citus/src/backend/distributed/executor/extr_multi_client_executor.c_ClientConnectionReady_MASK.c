
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int member_1; int member_0; } ;
struct pollfd {int events; scalar_t__ revents; void* fd; } ;
typedef int select ;
typedef int fd_set ;
struct TYPE_3__ {int pgConn; } ;
typedef scalar_t__ PostgresPollingStatusType ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct pollfd*,int,int) ;

__attribute__((used)) static bool
FUNC_8(MultiConnection *VAR_9,
       PostgresPollingStatusType VAR_10)
{
 bool VAR_11 = 0;
 int VAR_12 = 0;
 fd_set VAR_13;
 fd_set VAR_14;
 fd_set VAR_15;
 struct timeval VAR_16 = { 0, 0 };
 int VAR_17 = FUNC_3(VAR_9->pgConn);

 FUNC_2(&VAR_13);
 FUNC_2(&VAR_14);
 FUNC_2(&VAR_15);

 if (VAR_10 == VAR_3)
 {
  FUNC_1(VAR_17, &VAR_15);
  FUNC_1(VAR_17, &VAR_13);
 }
 else if (VAR_10 == VAR_4)
 {
  FUNC_1(VAR_17, &VAR_15);
  FUNC_1(VAR_17, &VAR_14);
 }

 VAR_12 = (select) (VAR_17 + 1, &VAR_13,
         &VAR_14, &VAR_15,
         &VAR_16);


 if (VAR_12 > 0)
 {
  VAR_11 = 1;
 }
 else if (VAR_12 == 0)
 {
  VAR_11 = 0;
 }
 else if (VAR_12 < 0)
 {
  if (VAR_8 == VAR_0)
  {




   VAR_11 = 0;
  }
  else
  {
   FUNC_0(VAR_8 == VAR_1);
   FUNC_4(VAR_2, (FUNC_5(),
       FUNC_6("select()/poll() failed: %m")));
  }
 }

 return VAR_11;
}
