
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {scalar_t__ msg_controllen; int * msg_control; } ;
struct kvec {int dummy; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; int ssocket; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,unsigned int,int) ;
 int FUNC_1 (struct TCP_Server_Info*) ;
 struct kvec* FUNC_2 (struct TCP_Server_Info*,unsigned int) ;
 int FUNC_3 (int ,struct msghdr*,struct kvec*,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_4 (struct kvec*,struct kvec*,unsigned int,int) ;
 scalar_t__ FUNC_5 (struct TCP_Server_Info*) ;
 int FUNC_6 (int,int) ;

int
FUNC_7(struct TCP_Server_Info *VAR_7, struct kvec *VAR_8,
         unsigned int VAR_9, unsigned int VAR_10)
{
 int VAR_11 = 0;
 int VAR_12;
 unsigned int VAR_13;
 struct msghdr VAR_14;
 struct kvec *VAR_15;

 VAR_15 = FUNC_2(VAR_7, VAR_9);
 if (!VAR_15)
  return -VAR_4;

 VAR_14.msg_control = ((void*)0);
 VAR_14.msg_controllen = 0;

 for (VAR_12 = 0; VAR_10; VAR_12 += VAR_11, VAR_10 -= VAR_11) {
  if (FUNC_5(VAR_7)) {
   VAR_12 = -VAR_2;
   break;
  }

  VAR_13 = FUNC_4(VAR_15, VAR_8, VAR_9, VAR_12);

  VAR_11 = FUNC_3(VAR_7->ssocket, &VAR_14,
     VAR_15, VAR_13, VAR_10, 0);

  if (VAR_7->tcpStatus == VAR_0) {
   VAR_12 = -VAR_6;
   break;
  } else if (VAR_7->tcpStatus == VAR_1) {
   FUNC_1(VAR_7);
   VAR_12 = -VAR_2;
   break;
  } else if (VAR_11 == -VAR_5 ||
      VAR_11 == -VAR_2 ||
      VAR_11 == -VAR_3) {





   FUNC_6(1000, 2000);
   VAR_11 = 0;
   continue;
  } else if (VAR_11 <= 0) {
   FUNC_0(1, "Received no data or error: expecting %d "
    "got %d", VAR_10, VAR_11);
   FUNC_1(VAR_7);
   VAR_12 = -VAR_2;
   break;
  }
 }
 return VAR_12;
}
