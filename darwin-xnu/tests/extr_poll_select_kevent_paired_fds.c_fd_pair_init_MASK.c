
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum fd_pair { ____Placeholder_fd_pair } fd_pair ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,char*,...) ;
 int VAR_5 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int*,int*,int *,int *,int *) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int ,int ,int ,int*) ;

__attribute__((used)) static void
FUNC_10(enum fd_pair VAR_6, int *VAR_7, int *VAR_8)
{
 switch (VAR_6) {
 case 129:
  FUNC_3(FUNC_7(VAR_7, VAR_8, ((void*)0), ((void*)0), ((void*)0)),
    ((void*)0));
  break;

 case 131: {
  char VAR_9[] = "/tmp/async-io-fifo.XXXXXX";
  VAR_5; FUNC_2(FUNC_5(VAR_9), ((void*)0));

  FUNC_3(FUNC_4(VAR_9, 0700), "mkfifo(%s, 0700)",
    VAR_9);




  *VAR_7 = FUNC_6(VAR_9, VAR_2 | VAR_1);
  VAR_5; FUNC_3(*VAR_7, "open(... O_RDONLY)");
  *VAR_8 = FUNC_6(VAR_9, VAR_3 | VAR_1);
  VAR_5; FUNC_3(*VAR_8, "open(... O_WRONLY)");
  break;
 }

 case 130: {
  int VAR_10[2];
  FUNC_3(FUNC_8(VAR_10), ((void*)0));
  *VAR_7 = VAR_10[0];
  *VAR_8 = VAR_10[1];
  break;
 }

 case 128: {
  int VAR_11[2];
  FUNC_3(FUNC_9(VAR_0, VAR_4, 0, VAR_11),
    ((void*)0));
  *VAR_7 = VAR_11[0];
  *VAR_8 = VAR_11[1];
  break;
 }

 default:
  FUNC_0("unknown descriptor pair type: %d", VAR_6);
  break;
 }

 VAR_5; FUNC_1(*VAR_7, -1, "reading descriptor");
 VAR_5; FUNC_1(*VAR_8, -1, "writing descriptor");
}
