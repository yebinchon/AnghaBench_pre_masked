
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_6__ {TYPE_2__* tp; } ;
typedef TYPE_1__ Tokenrow ;
struct TYPE_7__ {scalar_t__ type; int wslen; int len; int * t; } ;
typedef TYPE_2__ Token ;
struct TYPE_8__ {int fd; char* filename; int line; struct TYPE_8__* next; } ;
typedef TYPE_3__ Source ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*,int ) ;
 char* VAR_5 ;
 int FUNC_2 (char*,int ,int) ;

void
FUNC_3(Tokenrow *VAR_6, int VAR_7)
{
 char *VAR_8;
 Token *VAR_9;
 Source *VAR_10;

 VAR_9 = VAR_6->tp;
 VAR_6->tp++;

 VAR_10 = VAR_3;
 while (VAR_10 && VAR_10->fd==-1)
  VAR_10 = VAR_10->next;
 if (VAR_10==((void*)0))
  VAR_10 = VAR_3;

 VAR_9->type = VAR_2;
 if (VAR_9->wslen) {
  *VAR_5++ = ' ';
  VAR_9->wslen = 1;
 }
 VAR_8 = VAR_5;
 *VAR_8++ = '"';
 switch (VAR_7) {

 case 129:
  VAR_9->type = VAR_1;
  VAR_8 = FUNC_1(VAR_8-1, VAR_10->line);
  break;

 case 130: {
  char *VAR_11 = VAR_10->filename;
  while ((*VAR_8++ = *VAR_11++) != 0)
   if (VAR_11[-1] == '\\')
    *VAR_8++ = '\\';
  VAR_8--;
  break;
  }

 case 131:
  FUNC_2(VAR_8, VAR_4+4, 7);
  FUNC_2(VAR_8+7, VAR_4+20, 4);
  VAR_8 += 11;
  break;

 case 128:
  FUNC_2(VAR_8, VAR_4+11, 8);
  VAR_8 += 8;
  break;

 default:
  FUNC_0(VAR_0, "cpp botch: unknown internal macro");
  return;
 }
 if (VAR_9->type==VAR_2)
  *VAR_8++ = '"';
 VAR_9->t = (uchar*)VAR_5;
 VAR_9->len = VAR_8 - VAR_5;
 VAR_5 = VAR_8;
}
