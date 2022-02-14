
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_8__ {int (* statcallb ) (TYPE_3__*) ;} ;
struct TYPE_9__ {char* omsg; size_t optr; TYPE_1__ interface; int myid; } ;
typedef TYPE_2__ isdnloop_card ;
struct TYPE_10__ {int arg; int driver; int command; } ;
typedef TYPE_3__ isdn_ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(const u_char * VAR_2, int VAR_3, int VAR_4, isdnloop_card * VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 1;
 isdn_ctrl VAR_8;

 while (VAR_3) {
  int VAR_9 = VAR_3;
  u_char *VAR_10;
  u_char VAR_11[0x100];

  if (VAR_9 > 255)
   VAR_9 = 255;
  if (VAR_4) {
   if (FUNC_0(VAR_11, VAR_2, VAR_9))
    return -VAR_0;
  } else
   FUNC_3(VAR_11, VAR_2, VAR_9);
  FUNC_2(VAR_5, '>');
  for (VAR_10 = VAR_11; VAR_9 > 0; VAR_9--, VAR_10++) {
   VAR_3--;
   VAR_6++;
   FUNC_2(VAR_5, *VAR_10);
   VAR_5->omsg[VAR_5->optr] = *VAR_10;
   if (*VAR_10 == '\n') {
    VAR_5->omsg[VAR_5->optr] = '\0';
    VAR_5->optr = 0;
    FUNC_1(VAR_5);
    if (VAR_3) {
     FUNC_2(VAR_5, '>');
     VAR_7++;
    }
   } else {
    if (VAR_5->optr < 59)
     VAR_5->optr++;
   }
   VAR_7++;
  }
 }
 VAR_8.command = VAR_1;
 VAR_8.driver = VAR_5->myid;
 VAR_8.arg = VAR_7;
 VAR_5->interface.statcallb(&VAR_8);
 return VAR_6;
}
