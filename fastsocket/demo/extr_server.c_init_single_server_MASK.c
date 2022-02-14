
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint16_t ;
struct in_addr {int dummy; } ;
struct sockaddr_in {struct in_addr sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (struct sockaddr_in*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int ,int ,int ) ;

int FUNC_9(struct in_addr VAR_7, uint16_t VAR_8)
{
 struct sockaddr_in VAR_9;
 socklen_t VAR_10 = sizeof(VAR_9);
 int VAR_11, VAR_12, VAR_13;

 if((VAR_11 = FUNC_8(VAR_0, VAR_4, 0)) == -1) {
  FUNC_6("Unable to open socket");
  FUNC_1();
 }

 VAR_12 = FUNC_2(VAR_11, VAR_1, 0);
 VAR_12 |= VAR_3;
 FUNC_2(VAR_11, VAR_2, VAR_12);

 VAR_13 = 1;
 if(FUNC_7(VAR_11, VAR_5, VAR_6, &VAR_13, sizeof(VAR_13)) ==
    -1) {
  FUNC_6("Unable to set socket reuseaddr option");
  FUNC_1();
 }

 FUNC_5(&VAR_9, 0, VAR_10);
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_port = FUNC_3(VAR_8);
 VAR_9.sin_addr = VAR_7;

 if(FUNC_0(VAR_11, (struct sockaddr *)&VAR_9, VAR_10) == -1) {
  FUNC_6("Unable to bind socket");
  FUNC_1();
 }

 if(FUNC_4(VAR_11, 8192) != 0) {
  FUNC_6("Cannot listen for client connections");
  FUNC_1();
 }

 return VAR_11;
}
