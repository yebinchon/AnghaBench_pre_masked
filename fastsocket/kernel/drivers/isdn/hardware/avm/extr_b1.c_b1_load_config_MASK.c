
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* data; int len; scalar_t__ user; } ;
typedef TYPE_1__ capiloaddatapart ;
struct TYPE_6__ {unsigned int port; } ;
typedef TYPE_2__ avmcard ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (unsigned int,unsigned char) ;
 int FUNC_1 (unsigned int,int) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

int FUNC_4(avmcard *VAR_3, capiloaddatapart * VAR_4)
{
 unsigned char VAR_5[VAR_1];
 unsigned char *VAR_6;
 unsigned int VAR_7 = VAR_3->port;
 int VAR_8, VAR_9, VAR_10;

 VAR_6 = VAR_4->data;
 VAR_10 = VAR_4->len;
 if (VAR_10) {
  FUNC_0(VAR_7, VAR_2);
         FUNC_1(VAR_7, 1);
  FUNC_0(VAR_7, VAR_2);
         FUNC_1(VAR_7, VAR_10);
 }
 while (VAR_10 > VAR_1) {
  if (VAR_4->user) {
   if (FUNC_2(VAR_5, VAR_6, VAR_1))
    return -VAR_0;
  } else {
   FUNC_3(VAR_5, VAR_6, VAR_1);
  }
  for (VAR_8 = 0; VAR_8 < VAR_1; ) {
   FUNC_0(VAR_7, VAR_2);
   for (VAR_9=0; VAR_9 < 4; VAR_9++) {
    FUNC_0(VAR_7, VAR_5[VAR_8++]);
   }
  }
  VAR_10 -= VAR_1;
  VAR_6 += VAR_1;
 }
 if (VAR_10) {
  if (VAR_4->user) {
   if (FUNC_2(VAR_5, VAR_6, VAR_10))
    return -VAR_0;
  } else {
   FUNC_3(VAR_5, VAR_6, VAR_10);
  }
  for (VAR_8 = 0; VAR_8 < VAR_10; ) {
   FUNC_0(VAR_7, VAR_2);
   for (VAR_9=0; VAR_9 < 4; VAR_9++) {
    if (VAR_8 < VAR_10)
     FUNC_0(VAR_7, VAR_5[VAR_8++]);
    else
     FUNC_0(VAR_7, 0);
   }
  }
 }
 return 0;
}
