
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbstub_threadinfo {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct gdbstub_threadinfo*) ;
 int FUNC_2 (char*,int,int,int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,int,struct gdbstub_threadinfo*) ;
 int FUNC_5 (char const*,int*,int*,int*) ;
 int FUNC_6 (char const*,int*,int*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,int) ;

__attribute__((used)) static void FUNC_10(const char *VAR_1,char *VAR_2,s32 VAR_3)
{
 char *VAR_4;

 switch(VAR_1[1]) {
  case 'C':
   VAR_4 = VAR_2;
   *VAR_4++ = 'Q';
   *VAR_4++ = 'C';
   VAR_4 = FUNC_9(VAR_4,VAR_3);
   *VAR_4++ = 0;
   break;
  case 'P':
   {
    s32 VAR_5,VAR_6,VAR_7;
    struct gdbstub_threadinfo VAR_8;

    VAR_5 = FUNC_6(VAR_1,&VAR_7,&VAR_6);
    if(!VAR_5 || VAR_7&~0x1f) {
     FUNC_8(VAR_2,"E01");
     break;
    }

    VAR_5 = FUNC_1(VAR_6,&VAR_8);
    if(!VAR_5) {
     FUNC_8(VAR_2,"E02");
     break;
    }
    FUNC_4(VAR_2,VAR_7,VAR_6,&VAR_8);
   }
   break;
  case 'L':
   {
    s32 VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15;

    VAR_9 = FUNC_5(VAR_1,&VAR_11,&VAR_12,&VAR_10);
    if(!VAR_9) {
     FUNC_8(VAR_2,"E02");
     break;
    }
    if(VAR_12==0) {
     FUNC_8(VAR_2,"E02");
     break;
    }
    if(VAR_12>VAR_0) VAR_12 = VAR_0;

    VAR_4 = FUNC_7(VAR_2);
    if(VAR_11) VAR_15 = 0;
    else VAR_15 = VAR_10;

    VAR_14 = 0;
    for(VAR_13=0;VAR_13<VAR_12;VAR_13++) {
     VAR_15 = FUNC_0(VAR_15);
     if(VAR_15<=0) {
      VAR_14 = 1;
      break;
     }
     VAR_4 = FUNC_3(VAR_4,VAR_15);
    }
    *VAR_4 = 0;
    FUNC_2(VAR_2,VAR_13,VAR_14,VAR_10);
   }
   break;
  default:
   break;
 }
}
