
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_size; char* msg_bufc; int msg_bufr; int msg_bufx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,char*,int,int,int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_7 (char*,...) ;
 char* VAR_4 ;

int
FUNC_8(int VAR_5)
{
 char *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;
 char *VAR_16, VAR_17;

 if (VAR_5 > VAR_2)
  return (VAR_0);

 if (VAR_5 <= 0)
  return (VAR_0);

 VAR_7 = VAR_5;
 if (!(VAR_6 = (char*)FUNC_5(VAR_5))) {
  FUNC_7("log_setsize: unable to allocate memory\n");
  return (VAR_1);
 }
 FUNC_4(VAR_6, VAR_7);

 FUNC_0();

 VAR_11 = VAR_3->msg_size;
 VAR_10 = VAR_3->msg_bufc;
 VAR_12 = VAR_3->msg_bufr;
 VAR_13 = VAR_3->msg_bufx;

 FUNC_1("log_setsize(%d): old_logdata %p old_logsize %d old_bufr %d old_bufx %d\n",
       VAR_5, VAR_10, VAR_11, VAR_12, VAR_13);


 if (VAR_7 <= VAR_13) {
  VAR_15 = VAR_7;
  VAR_16 = VAR_10 + VAR_13 - VAR_15;
 } else {




  VAR_15 = FUNC_3(VAR_7, VAR_11);
  VAR_16 = VAR_10 + VAR_11 - (VAR_15 - VAR_13);
 }
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  if (VAR_16 >= VAR_10 + VAR_11)
   VAR_16 = VAR_10;

  VAR_17 = *VAR_16++;
  VAR_6[VAR_14] = VAR_17;
 }

 VAR_9 = VAR_14;
 if (VAR_9 >= VAR_7)
  VAR_9 = 0;
 VAR_3->msg_bufx = VAR_9;

 VAR_8 = VAR_13 - VAR_12;
 if (VAR_8 < 0)
  VAR_8 += VAR_11;
 VAR_8 = VAR_9 - VAR_8;
 if (VAR_8 < 0)
  VAR_8 += VAR_7;
 VAR_3->msg_bufr = VAR_8;

 VAR_3->msg_size = VAR_7;
 VAR_3->msg_bufc = VAR_6;

 FUNC_1("log_setsize(%d): new_logdata %p new_logsize %d new_bufr %d new_bufx %d\n",
       VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_2();



 FUNC_4(VAR_10, VAR_11);
 if (VAR_10 != VAR_4) {

  FUNC_6(VAR_10, VAR_11);
 }

 FUNC_7("set system log size to %d bytes\n", VAR_7);

 return 0;
}
